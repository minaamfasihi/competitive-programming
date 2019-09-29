public void merge(int[] a1, int m, int[] a2, int n) {
    if (a1.length == 0 || m < 0 || a2.length == 0 || n <= 0) return;

    int i = m - 1, j = n - 1;
    int idx = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (a1[i] == a2[j]) {
            a1[idx--] = a1[i--];
        } else if (a1[i] > a2[j]) {
            a1[idx--] = a1[i--];
        } else {
            a1[idx--] = a2[j--];
        }
    }
    while (j >= 0) {
        a1[idx--] = a2[j--];
    }
}
