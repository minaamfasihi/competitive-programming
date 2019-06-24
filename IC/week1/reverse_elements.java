public static int[] reverseElements(int[] a) {
    if (a == null || a.length == 0) return a;
    int start = 0;
    int end = a.length - 1;
    while (start < end) {
        swap(start++, end--, a);
    }
    return a;
}

public static void swap(int a, int b, int[] arr) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

public static void main(String[] args) {
    int [] arr = {3, 5, 2, 5, 2, 3, 9};
    int[] result = reverseElements(arr);
    for (int a : result) {
        System.out.println(a);
    }
}
