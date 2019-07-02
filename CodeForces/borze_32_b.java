import java.util.Scanner;

public class borze_32_b {
    public static String borze(String borzeCode) {
        StringBuilder sb = new StringBuilder();
        if (borzeCode != null) {
            int i = 0;
            while (i < borzeCode.length()) {
                if (borzeCode.charAt(i) == '.') sb.append('0');
                else if (borzeCode.charAt(i) == '-') {
                    if (i + 1 < borzeCode.length()) {
                        if (borzeCode.charAt(i + 1) == '-') {
                            sb.append('2');
                            i++;
                        }
                        else if (borzeCode.charAt(i + 1) == '.') {
                            sb.append('1');
                            i++;
                        }
                    }
                }
                i++;
            }
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        System.out.println(borze(input));
    }
}
