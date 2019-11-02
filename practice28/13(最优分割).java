
//https://www.nowcoder.com/practice/491fc726f2a54234a963eb5c0d3dfc1a?tpId=98&tqId=32925&tPage=6&rp=6&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader=new BufferedReader(new InputStreamReader(System.in));
        String []str1=bufferedReader.readLine().split(" ");
        int n=Integer.parseInt(str1[0]);
        int m=Integer.parseInt(str1[1]);
        String []str2=bufferedReader.readLine().split(" ");
        int sum=0;
        int max=0;
        int pt[]=new int[n];
        for(int i=0;i<str2.length;i++){
            pt[i]=Integer.parseInt(str2[i]);
            max=Math.max(max,pt[i]);
            sum+=pt[i];
        }
        System.out.println(BinarySearch(pt,n,m,max,sum));
    }
    public static int BinarySearch(int []nums, int n, int m, int left, int right){
        int ans=right;
        while(left<=right){
            int mid=(left+right)/2;
            int count=1;
            int sum=0;
            for(int i=0;i<n;i++){
                if(sum+nums[i]>mid){
                    count++;
                    sum=nums[i];
                }
                else{
                    sum+=nums[i];
                }
            }
            if(count<=m){
                ans=Math.min(ans,mid);
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
}