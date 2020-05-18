import java.util.Scanner;

/**
 * @author TFC
 * @date 2020/5/12 19:45
 */
// https://leetcode-cn.com/problems/add-binary/
public class Test {
    public static void main(String[] args) {
        System.out.println(addBinary("1010", "1011"));
    }

    public static String addBinary(String a, String b) {
        String temp = "";
        if (a.length() < b.length()) {
            temp = a;
            a = b;
            b = temp;
        }
        char[] strA = a.toCharArray();
        char[] strB = b.toCharArray();
        int i = a.length() - 1;
        int j = b.length() - 1;
        int r = 0;
        int total;
        while (i >= 0) {
            if (i >= 0 && j >= 0) {
                total = strA[i] - 48 + strB[j] - 48 + r;
                strA[i] = (char) (total % 2 + 48);
                r = total / 2;
            } else {
                total = strA[i] - 48 + r;
                strA[i] = (char) (total % 2 + 48);
                r = total / 2;
            }
            i--;
            j--;
        }
        StringBuilder resuslt = new StringBuilder(String.valueOf(strA));
        if (r != 0) {
            resuslt.insert(0, "1");
        }
        return resuslt.toString();
    }
}











