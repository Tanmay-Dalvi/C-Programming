// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"

// Output: true

// Example 2:

// Input: s = "()[]{}"

// Output: true

// Example 3:

// Input: s = "(]"

// Output: false

// Example 4:

// Input: s = "([])"

// Output: true

 

// Constraints:

// 1 <= s.length <= 104
// s consists of parentheses only '()[]{}'.

// Seen this question in a real interview before?
// 1/5
// Yes
// No
// Accepted
// 5.7M
// Submissions
// 13.7M
// Acceptance Rate
// 41.8%
// Topics
// Companies
// Hint 1
// Hint 2
// Hint 3
// Similar Questions
// Discussion (474)

#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> bracket_map = {{')', '('}, {'}', '{'}, {']', '['}};

        for (char ch : s) {
            if (bracket_map.count(ch)) { // If it's a closing bracket
                char top_element = st.empty() ? '#' : st.top();
                if (top_element != bracket_map[ch]) {
                    return false; // Mismatch found
                }
                st.pop();
            } else {
                st.push(ch); // Push opening bracket
            }
        }

        return st.empty();
    }
};

// Example usage (optional)
int main() {
    Solution sol;

    // Test cases
    cout << "isValid(\"()[]{}\"): " << (sol.isValid("()[]{}") ? "true" : "false") << endl;
    cout << "isValid(\"(]\"): " << (sol.isValid("(]") ? "true" : "false") << endl;
    cout << "isValid(\"([)]\"): " << (sol.isValid("([)]") ? "true" : "false") << endl;
    cout << "isValid(\"{[]}\"): " << (sol.isValid("{[]}") ? "true" : "false") << endl;
    cout << "isValid(\"(\"): " << (sol.isValid("(") ? "true" : "false") << endl;
    cout << "isValid(\"]\"): " << (sol.isValid("]") ? "true" : "false") << endl;
    cout << "isValid(\"\"): " << (sol.isValid("") ? "true" : "false") << endl;

    return 0;
}
