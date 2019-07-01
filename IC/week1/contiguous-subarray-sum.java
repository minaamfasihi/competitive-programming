public static Pair<Integer, Integer> contiguous_subarray_sum(int[] arr) {
    if (arr == null || arr.length == 0) return new Pair<Integer, Integer>(-1, -1);

    int start = 0, end = 0, s = 0;
    int sum = 0, msf = 0;
    for (int i = 0; i < arr.length; i++) {
        sum += arr[i];
        if (sum > msf) {
            msf = sum;
            start = s;
            end = i;
        } else if (sum <= 0) {
            sum = 0;
            s = i + 1;
        }
    }
    return new Pair<>(start, end);
}
