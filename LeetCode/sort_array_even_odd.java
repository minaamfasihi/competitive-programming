public int[] sortArrayByParity(int[] arr) {
    if (arr.length == 0) return arr;

    int nextEven = 0, nextOdd = arr.length - 1, unclassified = 0;
    while (unclassified < nextOdd) {
        if (arr[unclassified] % 2 == 0) {
            nextEven++; unclassified++;
        }
        else {
            swap(arr, unclassified, nextOdd);
            nextOdd--;
        }
    }
    return arr;
}

public void swap(int[] arr, int idx1, int idx2) {
    int temp  = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}
