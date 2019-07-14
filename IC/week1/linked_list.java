public class LLNode {
    public LLNode next;
    int data;

    public LLNode(LLNode next, int data) {
        super();
        this.next = next;
        this.data = data;
    }

    public LLNode getNext() {
        return this.next;
    }

    public int getData() {
        return this.data;
    }

    public void setNext(LLNode node) {
        this.next = node;
    }

    public void setData(int data) {
        this.data = data;
    }
}


public class linked_list {
    LLNode head;
    LLNode tail;

    public linked_list(LLNode head, LLNode tail) {
        super();
        this.head = head;
        this.tail = tail;
    }

    public LLNode getHead() {
        return this.head;
    }

    public LLNode getTail() {
        return this.tail;
    }

    public void setHead(LLNode head) {
        this.head = head;
    }

    public void setTail(LLNode tail) {
        this.tail = tail;
    }

    public LLNode get(int n) {
        LLNode node = head;
        for (int i = 0; i < n; i++) {
            if (node != null) {
                node = node.getNext();
            } else {
                throw new IndexOutOfBoundsException("No node at index: " + Integer.toString(n));
            }
        }
        if (node == null) {
            throw new IndexOutOfBoundsException("No node at index: " + Integer.toString(n));
        }
        return node;
    }
}
