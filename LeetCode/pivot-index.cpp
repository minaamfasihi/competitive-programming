int pivotIndex(vector<int>& nums) {
    int sumL = 0, sumR = 0, mid = 0;
    int i;
    if (nums.size() > 0) {
        for (int j = (nums.size() - 1); j > 0; j--) sumR += nums[j];
        for (i = 1; i < nums.size(); i++) {
            if (sumL == sumR) return mid;
            sumL += nums[mid];
            sumR -= nums[mid + 1];
            mid = i;
        }
    }
    if (i == nums.size() && sumL == 0) return i - 1;
    return -1;
}
