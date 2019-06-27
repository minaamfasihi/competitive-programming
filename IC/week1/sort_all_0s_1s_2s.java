public static int[] sort0s1s2s(int[] arr) {
    if (arr != null && arr.length > 0) {
        int mid = -1;
        int low = -1;
        int high = arr.length;
        while (mid + 1 < high) {
            if (arr[mid + 1] > 1) {
                swap(arr, high - 1, mid + 1);
                high--;
            } else if (arr[mid + 1] == 1) {
                mid++;
            } else if (arr[mid + 1] < 1) {
                swap(arr, low + 1, mid + 1);
                low++;
                mid++;
            }
        }
    }
    return arr;
}

public static void swap(int[] a, int start, int end) {
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
}
