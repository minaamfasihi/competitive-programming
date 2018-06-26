string reverseString(string s) {
    int last = s.length() - 1;
    for (int i = 0; i < last; i++) {
        char tmp = s[last];
        s[last] = s[i];
        s[i] = tmp;
        last--;
    }
    return s;
}
