
//https://leetcode-cn.com/problems/count-and-say/
class Solution {
    public static String countAndSay(int n) {
        StringBuilder res = new StringBuilder("1");
        StringBuilder temp = new StringBuilder("");
        int x = 1;
        for (int i = 2; i <= n; i++) {
            x = 1;
            for (int j = 0; j < res.length(); j++) {
                while (j < res.length() - 1 && res.charAt(j) == res.charAt(j + 1)) {
                    j++;
                    x++;
                }
                temp.append(x);
                temp.append(res.charAt(j));
                x = 1;
            }
            String str = temp.toString();
            res = new StringBuilder(str);
            temp = new StringBuilder("");
        }
        return res.toString();
    }

    public static void main(String[] args) {
        System.out.println(countAndSay(4));
    }
}