int majorityElement(vector<int>& nums) {
    if (nums.size() <= 0) return -1;
    int target = (nums.size() / 2);
    map<int, int> m;
    for (auto i : nums) {
        if (m.count(i) > 0) {
            m[i]++;
        }
        else {
            m[i] = 1;
        }
        if (m[i] > target) return i;
    }
    return -1;
}
