public static void cloneEven(int[] A) {
    if (A != null) {
        int end = A.length - 1;
        int last = findLastElem(A);
        while (last >= 0) {
            if (A[last] % 2 == 0) {
                A[end--] = A[last];
            }
            A[end--] = A[last--];
        }
    }
    for (int a : A) {
        System.out.println(a);
    }
}

public static int findLastElem(int[] a) {
    for (int i = a.length - 1; i >= 0; i--) {
        if (a[i] != -1) return i;
    }
    return -1;
}

public static void main(String[] args) {
    int[] b = { 1, 2, 5, 6, 8, -1, -1, -1 };
    cloneEven(b);
}
