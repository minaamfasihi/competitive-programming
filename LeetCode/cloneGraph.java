public Node cloneGraph(Node node) {
    if (node == null) return null;

    Node nodeCopy = new Node(node.val);
    HashMap<Node, Node> map = new HashMap<>();
    HashMap<Node, Integer> visited = new HashMap<>();
    HashMap<Node, Integer> visiting = new HashMap<>();
    map.put(node, nodeCopy);
    dfsVisit(node, map, visited, visiting);
    return nodeCopy;    
}

public void dfsVisit(Node node, HashMap<Node, Node> map, HashMap<Node, Integer> visited, HashMap<Node, Integer> visiting) {
    if (!visiting.containsKey(node)) visiting.put(node, 1);

    for (Node neighbor : node.neighbors) {
        if (!map.containsKey(neighbor)) {
            map.put(neighbor, new Node(neighbor.val));
        }

        Node nodeCopy = map.get(node);
        Node neighborCopy = map.get(neighbor);
        nodeCopy.neighbors.add(neighborCopy);
        if (!visited.containsKey(neighbor) && !visiting.containsKey(neighbor)) {
            dfsVisit(neighbor, map, visited, visiting);
        }
    }
    visited.put(node, 1);
}
