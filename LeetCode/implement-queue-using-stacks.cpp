class MyQueue {
private:
	stack<int> stackNewest;
	stack<int> stackOldest;

	void shiftStacks() {
		if (stackOldest.empty()) {
			while (!stackNewest.empty()) {
				stackOldest.push(stackNewest.top());
				stackNewest.pop();
			}
		}
	}
public:
	MyQueue() {

	}

	/** Push element x to the back of queue. */
	void push(int x) {
		stackNewest.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		shiftStacks();
		if (!stackOldest.empty()) {
			int top = stackOldest.top();
			stackOldest.pop();
			return top;
		}
		return INT_MIN;
	}

	/** Get the front element. */
	int peek() {
		shiftStacks();
		if (!stackOldest.empty()) {
			return stackOldest.top();
		}
		return INT_MIN;
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		return stackOldest.empty() && stackNewest.empty();
	}
};
