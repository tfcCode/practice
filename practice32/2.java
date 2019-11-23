


//https://www.nowcoder.com/practice/ca5c9ba9ebac4fd5ae9ba46114b0f476?tpId=85&tqId=29832&tPage=1&rp=1&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.*;

public class Main{
    public static void main(String args[]){
        Set<String> set=new HashSet<String>();
        Scanner sc=new Scanner(System.in);
        String str;
        while(sc.hasNext()){
            str=sc.next();
            set.add(str);
        }
        System.out.println(set.size());
    }
}