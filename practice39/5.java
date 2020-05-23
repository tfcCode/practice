import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

/**
 * @author TFC
 * @date 2020/5/14 22:16
 */
// https://leetcode-cn.com/problems/combinations/

public class Test {

    private List<List<Integer>> result = new LinkedList<>();
    int n, k;

    public static void main(String[] args) {
        Test test = new Test();
        List<List<Integer>> res = test.combine(4, 2);
        for (int i = 0; i < res.size(); i++) {
            System.out.println(res.get(i));
        }
    }

    public void backtrack(int first, LinkedList<Integer> curr) {
        if (curr.size() == k) {
            result.add(new LinkedList<>(curr));
        }

        for (int i = first; i <= n; i++) {
            curr.add(i);
            backtrack(i + 1, curr);
            curr.removeLast();
        }

    }

    public List<List<Integer>> combine(int n, int k) {
        this.n = n;
        this.k = k;
        backtrack(1, new LinkedList<>());
        return result;
    }
}















