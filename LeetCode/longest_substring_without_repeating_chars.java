public int lengthOfLongestSubstring(String s) {
    if (s == null || s.length() == 0) return 0;
    HashMap<Character, Integer> map = new HashMap<>();
    int count = 0, maxCount = Integer.MIN_VALUE, start = 0;
    char[] ch = s.toCharArray();
    for (int i = 0; i < ch.length; i++) {
        if (map.containsKey(ch[i])) {
            if (count > maxCount) maxCount = count;
            int currIndex = map.get(ch[i]);
            if (currIndex < start) {
                count++;
            } else if (currIndex > start) {
                count = (i + 1) - currIndex;
                start = currIndex + 1;
            }
            map.put(ch[i], i + 1);
        } else {
            map.put(ch[i], i + 1);
            count++;
        }
    }
    return count > maxCount ? count : maxCount;
}
