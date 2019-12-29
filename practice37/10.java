
//https://leetcode-cn.com/problems/maximum-subarray/
class Solution {
    public int maxSubArray(int[] nums) {
        int res=nums[0];
        int sum=0;
        for(int num:nums){
            if(sum>0){
                sum=sum+num;
            }
            else{
                sum=num;
            }
            res=Math.max(res,sum);
        }
        return res;
    }
}