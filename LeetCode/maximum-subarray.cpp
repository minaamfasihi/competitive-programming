int maxSubArray(vector<int>& nums) {
    if (nums.size() < 0) return -1;
    int meh = 0, msf = nums[0];
    for (int i = 0; i < nums.size(); i++) {
        meh += nums[i];
        if (msf < meh) msf = meh;
        if (meh < 0) meh = 0;
    }
    return msf;
}
