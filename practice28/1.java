

//https://www.nowcoder.com/practice/80ce674313ff43af9d7ac7a41ae21527?tpId=98&tqId=33025&tPage=11&rp=11&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
    Scanner scanner=new Scanner(System.in);
        String s = scanner.next();
        String str[] = s.split("\\.");
        if (Integer.parseInt(str[0]) > 255 || Integer.parseInt(str[1]) > 255 || Integer.parseInt(str[2]) > 255 || Integer.parseInt(str[3]) > 255) {
            System.out.println(0);
        } else if (Integer.parseInt(str[0]) == 10 && Integer.parseInt(str[1]) >= 0 && Integer.parseInt(str[2]) >= 0 && Integer.parseInt(str[3]) >= 0) {
            System.out.println(1);
        } else if (Integer.parseInt(str[0]) == 172 && Integer.parseInt(str[1]) >= 16 && Integer.parseInt(str[1]) <= 31 && Integer.parseInt(str[2]) >= 0 && Integer.parseInt(str[3]) >= 0) {
            System.out.println(1);
        } else if (Integer.parseInt(str[0]) == 192 && Integer.parseInt(str[1]) == 168 && Integer.parseInt(str[2]) >= 0 && Integer.parseInt(str[3]) >= 0) {
            System.out.println(1);
        }
        else{
            System.out.println(0);
        }
    }
}