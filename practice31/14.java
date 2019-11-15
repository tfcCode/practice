



//https://www.nowcoder.com/practice/6e6ad6338289498da79b7afb60e823b3?tpId=90&tqId=30894&tPage=6&rp=6&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A = sc.nextLine();
        String B = sc.nextLine();
        StringBuilder sb = new StringBuilder();
        for(int i=0;i<B.length();i++){
            if(B.charAt(i)=='?'){
                sb.append("[01]");
            }
            else{
                sb.append(B.charAt(i));
            }
        }
        Set<String> set=new HashSet<String>();
        for(int i=0;i<=A.length()-B.length();i++){
            String sub=A.substring(i,i+B.length());
            if(sub.matches(sb.toString())){
                set.add(sub);
            }
        }
        System.out.println(set.size());
    }
}