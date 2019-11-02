


//https://www.nowcoder.com/pat/2/problem/359
import java.util.Scanner;
public class Main{
    public static void main(String []args){
        Scanner scanner=new Scanner(System.in);
        String []str={"星期天","星期一","星期二","星期三","星期四","星期五","星期六"};
        int []p1={31,29,31,30,31,30,31,31,30,31,30,31};
        int []p2={31,28,31,30,31,30,31,31,30,31,30,31};
        while(scanner.hasNext()) {
            int n = scanner.nextInt();
            int[] pt = new int[12];
            if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
                pt = p1;
            } else {
                pt = p2;
            }
            int sum = 13;
            int result, x;
            int sign=0;
            for (int i = 0; i < 12; i++) {
                result = n - 1 + (n - 1) / 4 - (n - 1) / 100 + (n - 1) / 400 + sum;
                x = result % 7;
                if (str[x] == "星期五") {
                    if(sign==1){
                        System.out.printf("%c%d",' ',i+1);
                    }
                    else{
                        System.out.printf("%d",i+1);
                    }
                    sign=1;
                }
                sum = sum + pt[i];
            }
            System.out.println();
        }
    }
}
