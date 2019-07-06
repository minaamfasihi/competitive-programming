public List<List<Integer>> subsets(int[] nums) {
    if (nums == null || nums.length == 0) return new ArrayList<>();

    List<List<Integer>> result = new ArrayList<>();
    int[] buffer = new int[nums.length];
    subsetsHelper(nums, buffer, 0, 0, result);
    return result;
}

public static void subsetsHelper(int[] arr, int[] buffer, int startIndex, int bufferIndex, List<List<Integer>> result) {
    appendToResult(buffer, bufferIndex, result);

    if (startIndex == arr.length || bufferIndex == buffer.length) {
        return;
    }

    for (int i = startIndex; i < arr.length; i++) {
        buffer[bufferIndex] = arr[i];
        subsetsHelper(arr, buffer, i + 1, bufferIndex + 1, result);
    }
}

public static void appendToResult(int[] buffer, int bufferIndex, List<List<Integer>> result)
{
    if (buffer == null || buffer.length == 0) {
        result.add(new ArrayList<>());
    }

    ArrayList<Integer> temp = new ArrayList<>();
    for (int i = 0; i < bufferIndex; i++) {
        temp.add(buffer[i]);
    }
    result.add(temp);
}
