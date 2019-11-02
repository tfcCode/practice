

//https://www.nowcoder.com/practice/07bca1eb592146eab534bdfc099db7f5?tpId=98&tqId=32918&tPage=5&rp=5&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.io.*;

public class Main{
    public static void main(String []args) throws IOException {
        BufferedReader bufferedReader=new BufferedReader(new InputStreamReader(System.in));
        String s=bufferedReader.readLine();
        Sum(s);
    }
    public static void Sum(String s){
        String []str=s.split(",");
        int value=Integer.parseInt(str[str.length-1]);
        int sum=0;
        for(int i=0;i<str.length-1;i++){
            for(int j=i+1;j<str.length-1;j++){
                if(Integer.parseInt(str[i])+Integer.parseInt(str[j])==value){
                    sum=sum+j+i;
                }
            }
        }
        System.out.println(sum);
    }
}
