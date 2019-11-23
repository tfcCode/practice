
//https://www.nowcoder.com/practice/0960cb46233b446687b77facc9148b89?tpId=85&tqId=29851&tPage=2&rp=2&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int num = (int) Math.sqrt(n);
        int count = 0;
        for (int i = 1; i < Math.sqrt(n); i++) {
            int x = (int)Math.sqrt(n-i*i);
            for(int j=x;;j++){
                if(j*j+i*i>n){
                    break;
                }
                if(j*j+i*i==n){
                    count++;
                }
            }
        }
        count = count * 4;
        if (num * num == n) {
            count = count + 4;
        }
        System.out.println(count);
    }
}