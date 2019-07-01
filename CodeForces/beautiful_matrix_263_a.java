import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class beautiful_matrix_263_a {
    public static int beautifyMatrix(int[][] arr) {
        if (arr == null || arr.length == 0) return -1;
        int swaps = 0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                if (arr[i][j] == 1) {
                    swaps += Math.abs(i - 2);
                    swaps += Math.abs(j - 2);
                }
            }
        }
        return swaps;
    }

    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int [][] mat = new int[5][5];

        try {
            for (int i = 0; i < 5; i++) {
                String lines = br.readLine();
                String[] strs = lines.trim().split("\\s+");
                for (int j = 0; j < strs.length; j++) {
                    mat[i][j] = Integer.parseInt(strs[j]);
                }
            }
        }

        catch (Exception ex) {

        }
        System.out.println(beautifyMatrix(mat));
    }
}
