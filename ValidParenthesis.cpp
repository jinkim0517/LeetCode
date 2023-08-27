/**
Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

Example 4:
Input: S = "({[]})"
Output: true
 */

class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '{') {
                stack.push('}');
            } else if (s.charAt(i) == '['){
                stack.push(']');
            } else if (s.charAt(i) == '(') {
                stack.push(')');
            } else if (stack.isEmpty() || stack.pop() != s.charAt(i)) {
                return false;
            }
        }

        return stack.isEmpty();
    }
}