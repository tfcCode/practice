
//https://www.nowcoder.com/practice/1712e1cb393b499ba52036b702990839?tpId=90&tqId=30893&tPage=6&rp=6&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(br.readLine());
        String[] str=br.readLine().split(" ");
        int[] pt=new int[n];
        for(int i=0;i<n;i++){
            pt[i]=Integer.parseInt(str[i]);
        }
        int index=0;
        int temp=pt[0];
        for(int i=1;i<n;i++){
            if(temp>pt[i]){
                temp=pt[i];
                index=i;
            }
        }
        int count=1;
        temp=n-1;
        for(int i=n-1;i>index;i--){
            if(pt[i]>=pt[index]&&pt[i]<=pt[temp]){
                count++;
                temp=i;
            }
        }
        System.out.println(n-count);
    }
}
