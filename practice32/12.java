

//https://www.nowcoder.com/practice/876e3c5fcfa5469f8376370d5de87c06?tpId=85&tqId=29847&tPage=1&rp=1&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int[] pt=new int[n];
        for(int i=0;i<n;i++){
            pt[i]=sc.nextInt();
        }
        Arrays.sort(pt);
        int result=0;
        for(int i=0;i<n;i++){
            if(pt[i]>result+1){
                break;
            }
            result=result+pt[i];
        }
        System.out.println(result+1);
    }
}