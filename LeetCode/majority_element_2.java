public List<Integer> majorityElement(int[] nums) {
    List<Integer> result = new ArrayList<Integer>();

    if (nums == null || nums.length == 0) {
        return result;
    }
    HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
    for (int i = 0; i < nums.length; i++) {
        if (map.containsKey(nums[i]))
            map.put(nums[i], map.get(nums[i]) + 1);
        else map.put(nums[i], 1);

        if (map.size() == 3) {
            Iterator<Integer> iter = map.keySet().iterator();
            while (iter.hasNext()) {
                Integer key = (Integer) iter.next();
                if (map.get(key) == 1) iter.remove();
                else map.put(key, map.get(key) - 1);
            }
        }
    }

    for (Integer key : map.keySet()) {
        map.put(key, 0);
    }

    for (int i = 0; i < nums.length; i++) {
        if (map.containsKey(nums[i])) {
            map.put(nums[i], map.get(nums[i]) + 1);
        }
    }
    for (Integer key : map.keySet()) {
        if (map.get(key) > Math.floor(nums.length / 3)) result.add(key);
    }
    return result;
}
