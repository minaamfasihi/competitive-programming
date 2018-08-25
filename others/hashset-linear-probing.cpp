#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MyHashSet {
private:
	int** arr;
	int itemsPerBucket;
	int totalBuckets;

	int getHashCode(int value) {
		return (value % totalBuckets);
	}

	int getOffset(int value) {
		return (value / itemsPerBucket);
	}

public:
	/** Initialize your data structure here. */
	MyHashSet() {
		totalBuckets = 1000;
		itemsPerBucket = 1001;
		arr = new int*[totalBuckets];
		for (int i = 0; i < totalBuckets; i++) {
			arr[i] = new int[itemsPerBucket];
		}
		for (int i = 0; i < totalBuckets; i++) {
			for (int j = 0; j < itemsPerBucket; j++) {
				arr[i][j] = -1;
			}
		}
	}

	void add(int key) {
		int idx = getHashCode(key);
		int offset = getOffset(key);
		if (offset < 0) {
			cout << "Couldnt insert: " << key << endl;
			return;
		}
		if (arr[idx][offset] != key) {
			arr[idx][offset] = key;
			cout << "Inserted: " << key << endl;
		}
		else cout << "Couldnt insert: " << key << endl;
	}

	void remove(int key) {
		int idx = getHashCode(key);
		int offset = containsHelper(key);
		if (offset < 0) return;
		arr[idx][offset] = -2;
		cout << "Removed: " << key << endl;
	}

	/** Returns true if this set contains the specified element */
	bool contains(int key) {
		int idx = getHashCode(key);
		int offset = getOffset(key);
		while (arr[idx][offset] != key && arr[idx][offset] != -1) {
			offset++;
			if (offset >= itemsPerBucket) {
				cout << "Doesnt contain: " << key << endl;
				return false;
			}
		}
		if (arr[idx][offset] == key) {
			cout << "Contains: " << key << endl;
			return true;
		}
		cout << "Doesnt contain: " << key << endl;
		return false;
	}

	int containsHelper(int key) {
		int idx = getHashCode(key);
		int offset = getOffset(key);
		while (arr[idx][offset] != -1 && arr[idx][offset] != key) {
			offset++;
			if (offset >= itemsPerBucket) {
				return -1;
			}
		}
		return offset;
	}

	int insertHelper(int key) {
		int idx = getHashCode(key);
		int offset = getOffset(key);
		while (arr[idx][offset] != -1 && arr[idx][offset] != -2 && arr[idx][offset] != key) {
			offset++;
			if (offset >= itemsPerBucket) {
				return -1;
			}
		}
		return offset;
	}

	~MyHashSet() {
		for (int i = 0; i < totalBuckets; i++) {
			delete[] arr[i];
		}
		delete[] arr;
		arr = nullptr;
	}
};

int main() {
	MyHashSet hashSet;
	/*for (int i = 0; i < 100; i++) {
		hashSet.add(i);
	}*/
	hashSet.add(1);
	hashSet.add(2);
	hashSet.contains(1);    // returns true
	hashSet.contains(3);    // returns false (not found)
	hashSet.add(2);
	hashSet.contains(2);    // returns true
	hashSet.remove(2);
	hashSet.contains(2);    // returns false (already removed)
	return 0;
}
