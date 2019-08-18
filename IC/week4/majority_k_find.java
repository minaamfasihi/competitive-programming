public static Integer majorityKFind(int[] a, int k) {
    if (a == null || a.length == 0) return null;

    HashMap<Integer, Integer> map = new HashMap<>();
    for (int i = 0; i < a.length; i++) {
        if (map.containsKey(a[i])) {
            map.put(a[i], map.get(a[i]) + 1);
        } else {
            map.put(a[i], 1);
        }

        if (map.size() == k) {
            Iterator<Integer> iter = map.keySet().iterator();
            while (iter.hasNext()) {
                int key = iter.next();
                if (map.get(key) == 1) {
                    iter.remove();
                } else {
                    map.put(key, map.get(key) - 1);
                }
            }
        }
    }

    for (Integer key : map.keySet()) {
        map.put(key, 0);
    }

    for (int i = 0; i < a.length; i++) {
        if (map.containsKey(a[i])) {
            map.put(a[i], map.get(a[i]) + 1);
        }
    }

    for (Integer key : map.keySet()) {
        if (map.get(key) > (a.length / k)) return key;
    }

    return null;
}
