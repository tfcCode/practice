

//https://leetcode-cn.com/problems/divide-two-integers/
class Solution {
    public int divide(int dividend, int divisor) {
        boolean sign = (dividend > 0) ^ (divisor > 0);

        int result = 0;

        if (dividend > 0) {
            dividend = -dividend;
        }
        if (divisor > 0)
            divisor = -divisor;

        while (dividend <= divisor) {
            int temp_divisor = divisor;
            int temp_result = -1;
            while (dividend <= (temp_divisor << 1)) {
                if (temp_divisor <= (Integer.MIN_VALUE >> 1)) {
                    break;
                }
                temp_result <<= 1;
                temp_divisor <<= 1;
            }
            dividend -= temp_divisor;
            result += temp_result;
        }
        if(!sign){
            if(result<=Integer.MIN_VALUE){
                return Integer.MAX_VALUE;
            }
            result=-result;
        }
        return result;
    }
}
