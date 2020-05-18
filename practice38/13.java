import java.util.Stack;

/**
 * @author TFC
 * @date 2020/5/14 22:16
 */
// https://leetcode-cn.com/problems/simplify-path/
public class Test {
    public static void main(String[] args) {
        System.out.println(simplifyPath("/a/./b/../../c/"));
    }

    public static String simplifyPath(String path) {
        String[] strings = path.split("/");

        Stack<String> stack = new Stack<>();

        for (String string : strings) {
            if ("..".equals(string)) {
                if (!stack.isEmpty()) {
                    stack.pop();
                }
            } else if (!"".equals(string) && !".".equals(string)) {
                stack.push(string);
            }
        }
        if (stack.isEmpty()) {
            return "/";
        }
        StringBuilder builder = new StringBuilder();
        for (int i = 0; i < stack.size(); i++) {
            builder.append("/");
            builder.append(stack.get(i));
        }
        return builder.toString();
    }
}














