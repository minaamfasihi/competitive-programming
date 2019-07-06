public static void print_perms(int[] a, int x) {
    if (a == null || a.length == 0 || x >= a.length) return;

    int[] buffer = new int[x];
    boolean[] isInBuffer = new boolean[a.length];
    print_permutations_helper(a, buffer, 0, isInBuffer);
}

public static void print_permutations_helper(int[] a, int[] buffer, int bufferIndex, boolean[] isInBuffer) {
    if (bufferIndex == buffer.length) {
        printArray(buffer);
        return;
    }

    for (int i = 0; i < a.length; i++) {
        if (!isInBuffer[i]) {
            buffer[bufferIndex] = a[i];
            isInBuffer[i] = true;
            print_permutations_helper(a, buffer, bufferIndex + 1, isInBuffer);
            isInBuffer[i] = false;
        }
    }
}

public static void printArray(int[] buffer) {
    for (int i = 0; i < buffer.length; i++) {
        System.out.print(buffer[i] + ",");
    }
    System.out.println();
}
