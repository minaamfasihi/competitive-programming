public static int[] move_all_0s_to_end(int[] arr) {
    int count = 0;
    int temp;

    for (int i = 0; i < arr.length; i++) {
        if (arr[i] != 0) {
            temp = arr[count];
            arr[count] = arr[i];
            arr[i] = temp;
            count++;
        }
    }
    return arr;
}
