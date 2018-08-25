class MyCircularQueue {
	int cap;
	int front;
	int rear;
	int* arr;

public:
	MyCircularQueue(int k) {
		cap = k;
		arr = new int[cap];
		front = -1; 
		rear = -1;
	}

	bool enQueue(int value) {
		if (isFull()) {
			cout << "Queue full, cant insert: " << value << endl;
			return false;
		}

		if (isEmpty()) front = 0;
		rear = ((rear + 1) % cap);
		arr[rear] = value;
		cout << "Inserted: " << value << endl;
		return true;
	}

	bool deQueue() {
		if (isEmpty()) {
			cout << "Queue empty, cant dequeue" << endl;
			return false;
		}
		if (front == rear) {
			front = -1;
			rear = -1;
			return true;
		}
		cout << "Removed: " << arr[front] << endl;
		front = ((front + 1) % cap);
		return true;
	}

	int Front() {
		if (isEmpty()) return -1;
		return arr[front];
	}

	int Rear() {
		if (isEmpty()) return -1;
		return arr[rear];
	}

	bool isEmpty() {
		return front == -1;
	}

	bool isFull() {
		return front == ((rear + 1) % cap);
	}
};
