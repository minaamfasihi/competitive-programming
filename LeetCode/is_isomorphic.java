public boolean isIsomorphic(String s, String t) {
    if (s.length() != t.length()) return false;

    HashMap<Character, Character> map1 = new HashMap<>();
    HashMap<Character, Character> map2 = new HashMap<>();
    char[] str1 = s.toCharArray();
    char[] str2 = t.toCharArray();
    for (int i = 0; i < str1.length; i++) {
        if (!map1.containsKey(str1[i])) {
            if (!map2.containsKey(str2[i])) {
                map1.put(str1[i], str2[i]);
                map2.put(str2[i], str1[i]);
            } else {
                if (map2.get(str2[i]) != str1[i]) return false;
                else {
                    map1.put(str1[i], str2[i]);
                }
            }
        } else {
            if (map1.get(str1[i]) != str2[i]) return false;
        }
    }
    return true;
}
