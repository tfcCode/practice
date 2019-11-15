

//https://www.nowcoder.com/practice/c0ccc2e437f0473e8e5ebb7703c24089?tpId=90&tqId=30870&tPage=5&rp=5&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        String S = bufferedReader.readLine();
        String T = bufferedReader.readLine();
        int x = S.length() - T.length();
        int sum = 0;
        StringBuilder str = new StringBuilder(T);
        StringBuilder temp;
        for (int i = 0; i <= x; i++) {
            temp = new StringBuilder(S.substring(i, i+T.length()));
            sum = sum + dist(temp, str);
        }
        System.out.println(sum);
    }

    public static int dist(StringBuilder str1, StringBuilder str2) {
        int count = 0;
        for (int i = 0; i < str1.length(); i++) {
            if (str1.charAt(i) != str2.charAt(i)) {
                count++;
            }
        }
        return count;
    }
}