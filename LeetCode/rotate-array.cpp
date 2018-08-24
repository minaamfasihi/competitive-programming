bool reverse(vector<int>& v, int s, int e) {
    if (s < 0 || e < 0) return false;

    while (s < e) {
        swap(v[s], v[e]);
        s++; e--;
    }
    return true;
}

void rotate(vector<int>& nums, int k) {
    k = k % nums.size();
    if (reverse(nums, 0, nums.size() - k - 1) && reverse(nums, nums.size() - k, nums.size() - 1)) {
        reverse(nums, 0, nums.size() - 1);
    }
    return;
}
