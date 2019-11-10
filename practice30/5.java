import java.util.*;


//https://www.nowcoder.com/practice/dcc301bc11a7420b88afdbd272299809?tpId=90&tqId=30813&tPage=2&rp=2&ru=/ta/2018test&qru=/ta/2018test/question-ranking
public class Main{
    public static int change(int n,int m,char ch,String str){
        List<Integer> pt=new ArrayList<Integer>();
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)==ch){
                pt.add(i);
            }
        }
        if(pt.size()<=m){
            return n;
        }
        pt.add(n);
        int max=pt.get(m);
        for(int i=m+1;i<pt.size();i++){
            max=Math.max(max,pt.get(i)-pt.get(i-m-1)-1);
        }
        return max;
    }
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int m=scanner.nextInt();
        String str=scanner.next();
        int x1=change(n,m,'a',str);
        int x2=change(n,m,'b',str);
        int x=Math.max(x1,x2);
        System.out.println(x);
    }
}