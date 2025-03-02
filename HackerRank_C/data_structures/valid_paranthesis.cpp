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

#include <stdio.h>
#include <stdlib.h>

int main() {
    int stack[100]; // Assuming a fixed-size stack (dynamic memory allocation can also be used)
    int top = -1;   // Stack top pointer

    // Example push operation
    stack[++top] = 10;
    stack[++top] = 20;

    // Equivalent of `top_element = stack.pop() if stack else '#'`
    int top_element;
    if (top >= 0) {
        top_element = stack[top--]; // Pop operation
    } else {
        top_element = '#'; // Default value when stack is empty
    }

    printf("Top Element: %c\n", (top_element == '#') ? '#' : top_element + '0'); // Print top element

    return 0;
}
