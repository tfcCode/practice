

//https://www.nowcoder.com/practice/abf0f0d6b4c44676b44e66060286c45a?tpId=90&tqId=30835&tPage=3&rp=3&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        int x, y;
        int index=s.length();
        String sub;
        for (int i = s.length() - 1; i >= 1; i--) {
            sub=s.substring(i,s.length());
            if(s.startsWith(sub)){
                index=i;
            }
        }
        String str=s.substring(s.length()-index,s.length());
        System.out.println(s+str);
    }
}