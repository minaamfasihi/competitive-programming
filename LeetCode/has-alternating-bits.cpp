bool hasAlternatingBits(int n) {
    int lastBit = -1;
    int mod = 0;
    while (n > 0) {
        mod = n % 2;
        if (lastBit == -1) {
            lastBit = mod;
        }
        else {
            if (lastBit != mod) {
                lastBit = mod;
            }
            else return false;
        }
        n /= 2;
    }
    return true;
}
