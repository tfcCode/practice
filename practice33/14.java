
//https://www.nowcoder.com/practice/850fde3d987f4b678171abd88cf05710?tpId=85&tqId=29885&tPage=3&rp=3&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            String str1 = in.next();
            String str2 = in.next();
            if (judge(str1) && judge(str2)) {
                BigInteger num1 = new BigInteger(str1);
                BigInteger num2 = new BigInteger(str2);
                System.out.println(num1.add(num2));
            } else {
                System.out.println("error");
            }
        }
    }

    public static boolean judge(String str) {
        char ch;
        for (int i = 0; i < str.length(); i++) {
            ch = str.charAt(i);
            if (ch < '0' || ch > '9') {
                return false;
            }
        }
        return true;
    }
}