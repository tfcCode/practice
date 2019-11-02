


//https://www.nowcoder.com/practice/380380e6c6b444888ae145593ccbbbca?tpId=90&tqId=30840&tPage=4&rp=4&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.util.Scanner;
import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();

        Stack<Character> stack = new Stack<>();
        int result = 1;
        char c;

        for (int i = 0; i < s.length(); i++) {
            c = s.charAt(i);
            if (c == '(') {
                stack.push(c);

            }
            if (c == ')') {
                int size = stack.size();
                result *= size;
                stack.pop();
            }
        }

        System.out.println(result);
    }
}