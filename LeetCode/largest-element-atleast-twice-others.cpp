int dominantIndex(vector<int>& nums) {
    if (nums.size() < 1) return -1;

    int max = nums[0], ind = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > max) {
            max = nums[i];
            ind = i;
        } 
    }

    for (auto& i : nums) {
        if (i != max && max < (i * 2)) {
            return -1;
        }
    }
    return ind;
}
