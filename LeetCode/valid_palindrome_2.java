public boolean validPalindrome(String s) {
    if (s == null || s.length() == 0) return true;

    int start = 0, end = s.length() - 1;
    while (start < end) {
        if (s.charAt(start) != s.charAt(end)) 
            return (isPalin(s, start + 1, end) || 
                    isPalin(s, start, end - 1));
        start++; end--;
    }
    return true;
}

public boolean isPalin(String s, int i, int j) {
    while (i < j) {
        if (s.charAt(i) != s.charAt(j)) return false;

        i++; j--;
    }
    return true;
}
