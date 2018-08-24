void moveZeroes(vector<int>& nums) {
    int currInd = -1;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            if (currInd < 0) {
                currInd = i;
            }
        }
        else {
            if (currInd >= 0) {
                swap(nums[i], nums[currInd++]);
                i = currInd;
            }
        }
    }
}
