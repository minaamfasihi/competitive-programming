public static int closestElement(int[] arr, int target) {
    if (arr == null) return -1;
    int high = arr.length - 1;
    int low = 0;
    int result = -1;
    while (low <= high) {
        int mid = low + ((high - low) >> 1);
        result = record(arr, mid, result, target);
        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    return result;
}

public static int record(int[] a, int mid, int result, int target) {
    if (result == -1 || (Math.abs(a[mid] - target) < Math.abs(a[result] - target))) {
        return mid;
    }
    return result;
}
