
// https://www.nowcoder.com/practice/61cfbb2e62104bc8aa3da5d44d38a6ef?tpId=85&tqId=29856&tPage=2&rp=2&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        // 小于6的值
        if (n <= 5 || n % 2 != 0) {
            System.out.println(-1);
            System.exit(0);
        }
        // 其他
        if (n % 8 == 0) {
            System.out.println(n / 8);
        } else if ((n % 8) % 2 == 0 && n != 10) {
            System.out.println(n / 8 + 1);
        } else {
            System.out.println(-1);
        }
    }
}
