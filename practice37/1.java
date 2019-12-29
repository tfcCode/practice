
//https://leetcode-cn.com/problems/multiply-strings/
class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        String num1 = "1234";
        String num2 = "1000000";
        System.out.println(Integer.parseInt(solution.multiply(num1, num2)));
    }

    public String multiply(String num1, String num2) {
        if (num1.equals("0") || num2.equals("0")) {
            return "0";
        }
        int[] temp = new int[num1.length() + num2.length() - 1];
        for (int i = 0; i < num1.length(); i++) {
            int a = num1.charAt(i) - '0';
            for (int j = 0; j < num2.length(); j++) {
                int b = num2.charAt(j) - '0';
                temp[i + j] = temp[i + j] + a * b;
            }
        }

        int carry = 0, t;
        for (int i = temp.length - 1; i >= 0; i--) {
            t = temp[i] + carry;
            temp[i] = t % 10;
            carry = t / 10;
        }

        StringBuilder str = new StringBuilder("");
        for (int i = 0; i < temp.length; i++) {
            str.append(temp[i]);
        }

        while (carry > 0) {
            t = carry % 10;
            carry = carry / 10;
            str.insert(0, (char) (t + '0'));
        }
        return str.toString();
    }
}