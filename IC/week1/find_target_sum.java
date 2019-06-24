import javafx.util.Pair;

public static Pair<Integer, Integer> find_target_sum(int[] a, int sum) {
    if (a == null || a.length == 0) {
        return null;
    }
    int start = 0;
    int end = a.length - 1;
    while (start < end) {
        if (a[start] + a[end] == sum) {
            return new Pair<Integer, Integer>(a[start], a[end]);
        } else if (a[start] + a[end] > sum) {
            end--;
        } else start++;
    }
    return null;
}

public static void main(String[] args) {
    int[] arr = {1,2,3,5,6,7};
    Pair<Integer, Integer> result = find_target_sum(arr, 11);
    System.out.println(result.getKey());
    System.out.println(result.getValue());
}
