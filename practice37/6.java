
//https://leetcode-cn.com/problems/group-anagrams/
import java.util.*;

class Solution {

    public static void main(String[] args) {
        Solution solution = new Solution();
        String[] pt = new String[]{"eat", "tea", "tan", "ate", "nat", "bat"};
        System.out.println(solution.groupAnagrams(pt));
    }

    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> pt = new HashMap<>();
        for (int i = 0; i < strs.length; i++) {
            char[] ch = strs[i].toCharArray();
            Arrays.sort(ch);
            String x = String.valueOf(ch);
            if (!pt.containsKey(x)) {
                pt.put(x, new ArrayList<>());
            }
            pt.get(x).add(strs[i]);
        }
        List<List<String>> res = new ArrayList<>(pt.values());
        return res;
    }
}
