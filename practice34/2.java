
//https://www.nowcoder.com/practice/e08819cfdeb34985a8de9c4e6562e724?tpId=46&tqId=29030&tPage=1&rp=1&ru=/ta/leetcode&qru=/ta/leetcode/question-ranking
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

class Solution {
    public int run(TreeNode root) {
        if (root == null) {
            return 0;
        }
        int l = run(root.left);
        int r = run(root.right);
        if (l == 0 || r == 0) {
            return l + r + 1;
        }
        return Math.min(r, l) + 1;
    }
}