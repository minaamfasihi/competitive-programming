public int peakIndexInMountainArray(int[] A) {
  if (A == null || A.length < 3) return -1;
  int low = 0;
  int high = A.length - 1;
  while (low <= high) {
      int mid = low + ((high - low) >> 1);
      if (mid > 0 && mid < (A.length - 1) && 
          A[mid] > A[mid - 1] && A[mid] > A[mid + 1]) {
          return mid;
      } else if (mid > 0 && A[mid - 1] > A[mid]) high = mid - 1;
      else if (mid < (A.length - 1) && A[mid] < A[mid + 1]) low = mid + 1;
      // if (mid <= 0 || mid >= A.length) break;
  }
  return -1;
}
