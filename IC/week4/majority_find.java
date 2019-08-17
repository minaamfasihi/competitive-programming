public static Integer majorityFind(int[] arr) {
    if (arr == null || arr.length == 0) return null;

    int candidate = arr[0];
    int count = 1;
    for (int i = 1; i < arr.length; i++) {
        if (arr[i] == candidate) count++;
        else if (count > 0) count--;
        else {
            candidate = arr[i];
            count = 1;
        }
    }

    count = 0;
    for (int i = 0; i < arr.length; i++) {
        if (arr[i] == candidate) count++;
    }
    return count > (arr.length / 2) ? candidate : null;
}
