public static int pow(int x, int n) {
    if (n == 0) return 1;
    int temp = pow(x, n / 2);
    if (n % 2 == 0) {
        return temp * temp;
    } else {
        return x * temp * temp;
    }
}
