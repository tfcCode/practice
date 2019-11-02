

//https://www.nowcoder.com/pat/2/problem/373
import java.util.*;
public class Main{
    public static void main(String []args) {
        Scanner scanner = new Scanner(System.in);
        while(scanner.hasNext()) {
            int n = scanner.nextInt();
            int m = scanner.nextInt();
            Pick(n, m);
        }
    }
    public static void Pick(int n,int m){
        int current=0;
        for(int i=2;i<=n;i++){
            current=(current+m)%i;
        }
        System.out.println(current+1);
    }
}
