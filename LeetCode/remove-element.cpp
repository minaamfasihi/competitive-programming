int removeElement(vector<int>& nums, int val) {
    if (nums.size() == 0) return 0;

    int i = 0, k = 0;
    while (i < nums.size()) {
        if (nums[i] != val) {
            nums[k++] = nums[i];
        }
        i++;
    }
    return k;
}
