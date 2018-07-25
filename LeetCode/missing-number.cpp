int missingNumber(vector<int>& nums) {
        int xor_till_max = 0;
        int xor_arr_elems = 0;

        int high = nums.size();

        for (int i = 0; i <= high; i++) {
            xor_till_max = xor_till_max ^ i;
        }

        for (int i = 0; i < nums.size(); i++) {
            xor_arr_elems = xor_arr_elems ^ nums[i];
        }

        return (xor_arr_elems ^ xor_till_max);
    }
