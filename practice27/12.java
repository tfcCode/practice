

//https://www.nowcoder.com/practice/7037a3d57bbd4336856b8e16a9cafd71?tpId=98&tqId=33012&tPage=10&rp=10&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] pt = new int[n];
        for (int i = 0; i < n; i++) {
            pt[i] = scanner.nextInt();
        }
        int sum = 0;
        for (int i = pt.length - 1; i >= 0; i--) {
            sum= (int) Math.ceil((pt[i]+sum)/2.0);
        }
        System.out.println(sum);
    }
}