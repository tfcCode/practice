
//https://www.nowcoder.com/practice/738a3511d8d14f189481a62e725e2775?tpId=98&tqId=33047&tPage=12&rp=12&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        String str[] = scanner.next().trim().split(",");
        double x = Integer.parseInt(str[0].trim());
        double y = Integer.parseInt(str[1].trim());
        double k = 100000;
        double x1, y1, t;
        int pt = 0;
        for (int i = 3; i < str.length; i = i + 2) {
            x1 = Integer.parseInt(str[i].trim());
            y1 = Integer.parseInt(str[i + 1].trim());
            t = Math.sqrt(Math.pow((x1 - x), 2) + Math.pow((y1 - y), 2));
            if (t < k) {
                k = t;
                pt = i;
            }
        }
        if (str.length > 2 && Integer.parseInt(str[2].trim()) > 0) {
            System.out.println("(" + str[pt].trim() + ',' + str[pt + 1].trim() + ")");
        }
    }
}
