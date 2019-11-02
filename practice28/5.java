

//https://www.nowcoder.com/practice/1664fe871878496aa600b6e09557982b?tpId=98&tqId=33045&tPage=12&rp=12&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        String[] str = s.split(" ");
        int[] pt = new int[str.length];
        for (int i = 0; i < str.length; i++) {
            pt[i] = Integer.parseInt(str[i]);
        }
        Arrays.sort(pt);
        for (int i = 0; i < str.length - 1; i++) {
            if (pt[i] == pt[i + 1]) {
                System.out.println(pt[i]);
                break;
            }
        }
    }
}