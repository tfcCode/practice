

//https://www.nowcoder.com/practice/53e4c208b8cf497086ecd65ef45349bb?tpId=85&tqId=29835&tPage=1&rp=1&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            long num = in.nextLong();
            long x = (long) Math.pow(num, 0.5);
            if (x * (x + 1) > num) {
                System.out.println(x - 1);
            } else {
                System.out.println(x);
            }
        }
    }
}