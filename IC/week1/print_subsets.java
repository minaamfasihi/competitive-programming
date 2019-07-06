public static void printSubsets(int[] nums) {
    if (nums == null || nums.length == 0) return;

    int[] buffer = new int[nums.length];
    printSubsetsHelper(nums, buffer, 0, 0);
}

public static void printSubsetsHelper(int[] arr, int[] buffer, int startIndex, int bufferIndex) {
    printArray(buffer, bufferIndex);

    if (startIndex == arr.length || bufferIndex == buffer.length) {
        return;
    }

    for (int i = startIndex; i < arr.length; i++) {
        buffer[bufferIndex] = arr[i];
        printSubsetsHelper(arr, buffer, i + 1, bufferIndex + 1);
    }
}

public static void printArray(int[] buffer, int bufferIndex) {
    if (buffer == null || buffer.length == 0) return;

    for (int i = 0; i < bufferIndex; i++) {
        System.out.print(buffer[i]);
    }
    System.out.println();
}
