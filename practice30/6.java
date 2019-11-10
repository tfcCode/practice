

//https://www.nowcoder.com/practice/837f4d04f5cb4f26a8215b2b95cc76a5?tpId=90&tqId=30823&tPage=3&rp=3&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.util.*;

public class Main{
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        String s=scanner.next();
        List<String> pt=new ArrayList<>();
        String str;
        for(int i=1;i<s.length();i++){
            for(int j=0;j<=s.length()-i;j++){
                str=s.substring(j,j+i);
                if(pt.indexOf(str)<0) {
                    pt.add(str);
                }
            }
            Collections.sort(pt);
            for(int j=0;j<pt.size();j++){
                System.out.print(pt.get(j)+" ");
            }
            pt.clear();
        }
        System.out.println(s+" ");
    }
}