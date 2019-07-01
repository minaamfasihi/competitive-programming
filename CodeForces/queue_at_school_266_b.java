import java.util.Scanner;

public class queue_at_school_266_b {
    public static String queueAtSchool(String queue, int timeElapsed) {
        if (queue != null) {
            StringBuilder sb = new StringBuilder(queue);
            int n = queue.length();
            for (int j = 0; j < timeElapsed; j++) {
                for (int i = 0; i < (n - 1); i++) {
                    if (queue.charAt(i) == 'B' && queue.charAt(i + 1) == 'G') {
                        sb.setCharAt(i, 'G');
                        sb.setCharAt(i + 1, 'B');
                    }
                }
                queue = sb.toString();
            }
            return queue;
        }
        return null;
    }

    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int timeElapsed = sc.nextInt();
        str = sc.next();
        System.out.println(queueAtSchool(str, timeElapsed));
    }
}
