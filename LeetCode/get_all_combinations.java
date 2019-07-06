public static List<List<Integer>> combine(int n, int k) {
    List<List<Integer>> combinations = new ArrayList<>();
    int[] numbers = new int[n + 1];
    for (int i = 1; i < n + 1; i++) {
        numbers[i] = i;
    }
    int[] buffer = new int[k];
    getAllCombos(numbers, buffer, 1, 0, combinations);
    return combinations;
}

public static void getAllCombos(int[] arr, int[] buffer, int startIndex, int bufferIndex, List<List<Integer>> combinations) {
    if (bufferIndex == buffer.length) {
        ArrayList<Integer> combination = new ArrayList<>();
        for (int i : buffer) {
            combination.add(i);
        }
        combinations.add(combination);
        return;
    }

    if (startIndex == arr.length) {
        return;
    }

    for (int i = startIndex; i < arr.length; i++) {
        buffer[bufferIndex] = arr[i];
        getAllCombos(arr, buffer, i + 1, bufferIndex + 1, combinations);
    }
}
