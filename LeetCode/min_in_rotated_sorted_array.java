public static int minInCyclicallySortedArray(int[] arr) {
    int low = 0, high = arr.length - 1;
    int right = arr[arr.length - 1];
    while (low <= high) {
        int mid = low + ((high - low) >> 1);
        if (arr[mid] <= right && (mid == 0 || (mid > 0 && arr[mid - 1] > arr[mid])))
            return nums[mid];
        else if (arr[mid] > right) {
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return -1;
}
