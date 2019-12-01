
//https://www.nowcoder.com/practice/11cc498832db489786f8a03c3b67d02c?tpId=85&tqId=29869&tPage=2&rp=2&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.*;
import java.util.Scanner;

public class Main {
    static LinkedList<Integer> temp = new LinkedList<>();

    static int m, n;

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String[] s = sc.nextLine().split(" ");
        n = Integer.parseInt(s[0]);
        m = Integer.parseInt(s[1]);
        amount(1, m);
    }

    static void amount(int index, int x) {
        if (x == 0) {
            ListIterator<Integer> it = temp.listIterator();
            System.out.print(it.next());
            while (it.hasNext()) {
                System.out.print(" " + it.next());
            }
            System.out.println();
            return;
        }
        for (int i = index; i <= n && i <= x; i++) {
            temp.add(i);
            amount(i + 1, x - i);
            temp.removeLast();
        }
    }
}