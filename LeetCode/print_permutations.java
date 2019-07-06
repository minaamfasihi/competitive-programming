public static List<List<Integer>> permute(int[] nums) {
    if (nums == null || nums.length == 0) return new ArrayList<>();

    int[] buffer = new int[nums.length];
    boolean[] isInBuffer = new boolean[nums.length];
    List<List<Integer>> permutations = new ArrayList<>();
    permutations_helper(nums, buffer, 0, isInBuffer, permutations);
    return permutations;
}

public static void permutations_helper(int[] a, int[] buffer, int bufferIndex,
    boolean[] isInBuffer, List<List<Integer>> result) {
    if (bufferIndex == buffer.length) {
        appendToResult(buffer, result);
        return;
    }

    for (int i = 0; i < a.length; i++) {
        if (!isInBuffer[i]) {
            buffer[bufferIndex] = a[i];
            isInBuffer[i] = true;
            permutations_helper(a, buffer, bufferIndex + 1, isInBuffer, result);
            isInBuffer[i] = false;
        }
    }
}

public static void appendToResult(int[] buffer, List<List<Integer>> result) {
    ArrayList<Integer> temp = new ArrayList<>();
    for (int i = 0; i < buffer.length; i++) {
        temp.add(buffer[i]);
    }
    result.add(temp);
}
