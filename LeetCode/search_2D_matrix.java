public boolean searchMatrix(int[][] matrix, int target) {
    if (matrix == null || matrix.length == 0 || matrix[0].length == 0) {
        return false;
    }
    int m = matrix.length;
    int n = matrix[0].length;

    int left = 0, right = m * n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int candidate = matrix[mid / n][mid % n];
        if (candidate == target) return true;
        else if (candidate > target) right = mid - 1;
        else left = mid + 1;
    }
    return false;
}
