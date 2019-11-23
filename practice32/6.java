


//https://www.nowcoder.com/practice/74475ee28edb497c8aa4f8c370f08c30?tpId=85&tqId=29836&tPage=1&rp=1&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s1=in.next();
        String s2=in.next();
        StringBuilder s=new StringBuilder(s1);
        StringBuilder t=new StringBuilder(s2);
        int x=0;
        char ch=t.charAt(x);
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)==ch){
                x++;
                if(x==t.length()){
                    break;
                }
                ch=t.charAt(x);
            }
        }
        if(x==t.length()){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}