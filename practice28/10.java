

//https://www.nowcoder.com/practice/02f2bbaadbcf424b8cbc7e264ddef9b4?tpId=98&tqId=33056&tPage=12&rp=12&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] pt = new int[n];
        for (int i = 0; i < n; i++) {
            pt[i] = scanner.nextInt();
        }
        int count = n - 1;
        for (int i = n - 1; i >= 0; i--) {
            if (i > 0 && pt[i] > pt[i - 1]) {
                count--;
            } else {
                break;
            }
        }
        System.out.println(count);
    }
}
