public Node copyRandomList(Node head) {
    if (head == null) return null;

    HashMap<Node, Node> map = new HashMap<>();
    Node curr = head;
    Node newCurr = null;
    Node newLst = null;
    while (curr != null) {
        if (!map.containsKey(curr)) {
            map.put(curr, new Node(curr.val));
        }
        if (curr.random != null) {
            if (!map.containsKey(curr.random)) {
                map.put(curr.random, new Node(curr.random.val));
            }
        }
        if (newCurr == null) {
            newCurr = map.get(curr);
            newLst = newCurr;
        } else {
            newCurr.next = map.get(curr);
            newCurr = newCurr.next;
        }
        Node newRand = null;
        if (map.containsKey(curr.random)) {
            newRand = map.get(curr.random);
        }
        newCurr.random = newRand;
        curr = curr.next;
    }
    return newLst;
 }
