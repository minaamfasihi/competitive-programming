public int[] intersection(int[] nums1, int[] nums2) {
    if (nums1.length == 0 || nums2.length == 0) return new int[] {};
    Arrays.sort(nums1);
    Arrays.sort(nums2);
    List<Integer> result = new ArrayList<>();
    int i = 0, j = 0, idx = 0;
    while (i < nums1.length && j < nums2.length) {
        if (nums1[i] == nums2[j] && (i == 0 || (nums1[i] != nums1[i - 1]))) {
            result.add(nums1[i++]);
            j++;
        } else if (nums1[i] > nums2[j]) {
            j++;
        } else i++;
    }
    return result.stream().mapToInt(k->k).toArray();
}
