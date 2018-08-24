int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;

    int prev = nums[0];
    int currInd = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (prev != nums[i]) {
            prev = nums[i];
            nums[currInd++] = nums[i];
        }
    }
    return currInd;
}
