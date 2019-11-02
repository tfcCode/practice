import java.util.*;
//https://www.nowcoder.com/practice/3b4996b5786f4157a3a04a9df81aef08?tpId=98&tqId=33046&tPage=12&rp=12&ru=/ta/2019test&qru=/ta/2019test/question-ranking
public class Main {
    public static void main(String args[]) {
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int k=scanner.nextInt();
        List<Integer> pt=new ArrayList<>();
        while(k>0){
            pt.add(k%2);
            k=k/2;
        }
        int sum=0;
        int x=pt.size()-1;
        for(int i=pt.size()-1;i>=0;i--){
            sum= (int) (sum+pt.get(i)*Math.pow(n,x--));
        }
        System.out.println(sum);
    }
}