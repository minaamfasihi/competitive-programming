public String reverseWords(String s) {
    if (s == null || s.length() == 0) return s;

    s = s.trim().replaceAll("\\s+", " ");
    char[] wordArray = s.toCharArray();        
    wordArray = reverse(wordArray, 0, s.length() - 1);
    int start = 0, end = s.length() - 1;
    for (int i = 0; i < s.length(); i++) {
        if (wordArray[i] == ' ') {
            wordArray = reverse(wordArray, start, i - 1);
            start = i + 1;
        }
    }
    reverse(wordArray, start, s.length() - 1);
    return String.valueOf(wordArray);
}

public char[] reverse(char[] s, int start, int end) {
    if (start < 0  || start >= s.length || end < 0 || end >= s.length) 
        return s;

    while (start < end) {
        s = swap(s, start++, end--);
    }
    return s;
}

public char[] swap(char[] s, int i, int j) {
    char c = s[i];
    s[i] = s[j];
    s[j] = c;
    return s;
}
