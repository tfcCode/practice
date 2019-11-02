
//https://www.nowcoder.com/practice/521049ca23f147d698e1cff923c3262a?tpId=98&tqId=33016&tPage=10&rp=10&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader bufferedReader=new BufferedReader(new InputStreamReader(System.in));
        String str1,str2,s;
        String [] version1,version2,str;
        s = bufferedReader.readLine();
        str = s.split(" ");
        str1 = str[0];
        str2 = str[1];
        version1 = str1.split("\\.");
        version2 = str2.split("\\.");
        int sign=0;
        for (int i = 0; i < version1.length && i < version2.length; i++) {
            if (Integer.parseInt(version1[i]) < Integer.parseInt(version2[i])) {
                System.out.println("-1");
                sign=1;
                break;
            } else if (Integer.parseInt(version1[i]) > Integer.parseInt(version2[i])) {
                System.out.println("1");
                sign=1;
                break;
            }
        }
        if(sign==0) {
            if (version1.length < version2.length) {
                System.out.println("-1");
            } else if (version1.length > version2.length) {
                System.out.println("1");
            } else if (version1.length == version2.length) {
                System.out.println("0");
            }
        }
    }
}
