vector<int> plusOne(vector<int>& digits) {
    int carry = 0;
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (i == digits.size() - 1) {
            sum = digits[i] + 1 + carry;
        }
        else {
            sum = digits[i] + carry;
        }
        if (sum > 9) {
            carry = 1;
            digits[i] = 0;
        }
        else {
            digits[i] = sum; 
            carry = 0;
        }
    }
    if (carry) {
        digits.insert(digits.begin(), carry);
    }
    return digits;
}
