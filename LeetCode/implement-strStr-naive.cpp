int strStr(string haystack, string needle) {
    if (needle.length() == 0) return 0;

    int startInd = -1, j = 0;
    for (int i = 0; i < haystack.length(); i++) {
        if (haystack[i] == needle[j]) {
            if (startInd == -1) {
                startInd = i;
            }
            if (j == needle.length() - 1) return startInd;
            j++;
        }
        else {
            j = 0;
            if (startInd != -1) i = startInd;  
            startInd = -1;
        }
    }
    return -1;
}
