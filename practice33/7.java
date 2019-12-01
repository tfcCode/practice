

//https://www.nowcoder.com/practice/cc727473d1e248ccb674eb31bd8683dc?tpId=85&tqId=29865&tPage=2&rp=2&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String[] s = sc.nextLine().split(" ");
        int k = Integer.parseInt(s[s.length - 1]);
        int[] pt = new int[s.length - 1];
        for (int i = 0; i < s.length - 1; i++) {
            pt[i] = Integer.parseInt(s[i]);
        }
        Arrays.sort(pt);
        System.out.print(pt[0]);
        for (int i = 1; i < k; i++) {
            System.out.print(" " + pt[i]);
        }
    }
}