  public int majorityElement(int[] nums) {
      if (nums == null || nums.length == 0) {
          return -1;
      }

      int cand = nums[0];
      int count = 1;
      for (int i = 1; i < nums.length; i++) {
          if (nums[i] == cand) {
              count++;
          }
          else if (count > 0) count--;
          else {
              count = 1;
              cand = nums[i];
          }
      }
      count = 0;
      for (int i = 0; i < nums.length; i++) {
          if (nums[i] == cand) {
              count++;
          }
      }
      return count >= (nums.length / (double) 2) ? cand : -1;
  }
