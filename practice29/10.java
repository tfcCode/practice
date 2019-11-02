
//https://www.nowcoder.com/practice/8b870ea5dda44975a08f4b82fd6bdb16?tpId=98&tqId=32945&tPage=7&rp=7&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.io.*;
public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        String s = bf.readLine();
        StringBuilder sb = new StringBuilder();
        while(s.length()>0){
            int index=s.lastIndexOf(s.charAt(0));
            for(int i=1;i<index;i++){
                index=Math.max(s.lastIndexOf(s.charAt(i)),index);
            }
            sb=sb.append(index+1).append(" ");
            s=s.substring(index+1);
        }
        System.out.println(sb.substring(0, sb.length() - 1));
    }

}