string reverseWords(string s) {
    int i = 0, j = 0, k = 0;
    while (i < s.length()) {
        if (s[i] == ' ' || i == (s.length() - 1)) {
            j = i - 1;
            if (i == (s.length() - 1)) j++;

            while (k < j) {
                char c = s[k];
                s[k] = s[j];
                s[j] = c;
                k++;
                j--;
            }
            k = i + 1;
        }
        i++;
    }

    return s;
}
