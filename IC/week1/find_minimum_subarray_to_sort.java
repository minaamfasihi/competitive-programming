import javafx.util.Pair;

public static Pair<Integer, Integer> findMinContSubArray(int[] arr) {
    if (arr == null || arr.length == 0) {
        return new Pair<Integer, Integer>(-1, -1);
    }

    int start = 0;
    for (int i = 0; i < arr.length - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i; break;
        }
    }
    int end = -1;
    for (int i = arr.length - 1; i >= start; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i; break;
        }
    }

    int max = arr[start];
    int min = arr[end];
    for (int i = start; i <= end; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    int x = -1;
    for (int i = 0; i <= start; i++) {
        if (arr[i] > min) {
            x = i;
            break;
        }
    }
    int y = -1;
    for (int i = arr.length - 1; i >= end; i--) {
        if (arr[i] < max) {
            y = i;
            break;
        }
    }
    return new Pair<Integer, Integer>(x, y);
}

