int findMaxConsecutiveOnes(vector<int>& nums) {
    stack<int> s;
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) count++;
        else {
            s.push(count);
            count = 0;
        }
    }
    if (count > 0) s.push(count);

    int max = 0;

    while (!s.empty()) {
        if (max < s.top()) {
            max = s.top();
        }
        s.pop();
    }
    return max;
}
