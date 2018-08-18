string addBinary(string a, string b) {
    int aLen = a.length(), bLen = b.length(), carry = 0;
    int max = aLen > bLen ? aLen : bLen;
    int newSize = max;
    char* arr = new char[newSize];
    newSize--;
    int i = aLen - 1, j = bLen - 1;
    while (i >= 0 && j >= 0) {
        if (a[i] == '1' && b[j] == '1') {
            if (carry) arr[newSize--] = '1';
            else {
                arr[newSize--] = '0';
                carry = 1;
            }
        }
        else if (a[i] == '1' || b[j] == '1') {
            if (carry) arr[newSize--] = '0';
            else {
                arr[newSize--] = '1';
            }
        }
        else {
            if (carry) {
                arr[newSize--] = '1'; carry = 0;
            }
            else arr[newSize--] = '0';
        }
        i--; j--;
    }
    while (i >= 0) {
        if (a[i] == '1') {
            if (carry) arr[newSize--] = '0';
            else arr[newSize--] = '1';
        }
        else {
            if (carry) {
                arr[newSize--] = '1';
                carry = 0;
            }
            else arr[newSize--] = '0';
        }
        i--;
    }
    while (j >= 0) {
        if (b[j] == '1') {
            if (carry) arr[newSize--] = '0';
            else arr[newSize--] = '1';
        }
        else {
            if (carry) {
                arr[newSize--] = '1';
                carry = 0;
            }
            else arr[newSize--] = '0';
        }
        j--;
    }
    string result;
    for (int k = 0; k < max; k++) {
        if (carry) {
            result += '1';
            carry = 0;
        }
        result += arr[k];
    }
    delete[] arr;
    return result;
}
