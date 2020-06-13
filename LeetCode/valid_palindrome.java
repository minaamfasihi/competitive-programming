public boolean isPalindrome(String s) {
    if (s == null || s.length() == 0) return true;

    int start = 0, end = s.length() - 1;
    while (start < end) {
        char left = Character.toLowerCase(s.charAt(start));
        char right = Character.toLowerCase(s.charAt(end));
        if (!isAlphaNumeric(left)) {
            start++; 
            continue;
        }
        if (!isAlphaNumeric(right)) {
            end--;
            continue;
        }
        if (left != right) return false;
        start++; end--;
    }
    return true;
}

boolean isAlphaNumeric(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) return true;
    return false;
}
