// This is not working for large inputs, will have to look into it.

public static int squareRootOfX(int x) {
    if (x < 1) return x;

    int low = 1;
    int high = ((x >> 1) + 1);
    while (low <= high) {
        int mid = low + ((high - low) >> 1);
        int prod = mid * mid;
        if (prod == x) return mid;
        else if (prod > x) high = mid - 1;
        else low = mid + 1;
    }
    return low - 1;
}
