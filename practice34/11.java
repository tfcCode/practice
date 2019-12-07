
//https://leetcode-cn.com/problems/container-with-most-water/
import java.util.Scanner;

class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int[] pt=new int[n];
        for(int i=0;i<n;i++){
            pt[i]=sc.nextInt();
        }
        System.out.println(maxArea(pt));
    }

    public static int maxArea(int[] height) {
        int res=0,i=0,j=height.length-1;
        while(i<j){
            if(height[i]>height[j]){
                res=Math.max(res,height[j]*(j-i));
                j--;
            }else{
                res=Math.max(res,height[i]*(j-i));
                i++;
            }
        }
        return res;
    }
}