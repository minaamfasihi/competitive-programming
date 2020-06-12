public int firstUniqChar(String s) {
    if (s == null || s.length() == 0) return -1;
    HashMap<Character, Integer> map = new HashMap<>();
    for (int i = 0; i < s.length(); i++) {
        if (!map.containsKey(s.charAt(i))) {
            map.put(s.charAt(i), 1);
        } else map.put(s.charAt(i), map.get(s.charAt(i)) + 1);
    }
    for (int i = 0; i < s.length(); i++) {
        char c = s.charAt(i);
        if (map.get(c) == 1) {
            return i;
        }
    }
    return -1;
}
