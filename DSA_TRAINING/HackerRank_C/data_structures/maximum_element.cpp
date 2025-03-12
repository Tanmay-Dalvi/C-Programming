// You have an empty sequence, and you will be given  queries. Each query is one of these three types:

// 1 x  -Push the element x into the stack.
// 2    -Delete the element present at the top of the stack.
// 3    -Print the maximum element in the stack.
// Function Description

// Complete the getMax function in the editor below.

// getMax has the following parameters:
// - string operations[n]: operations as strings

// Returns
// - int[]: the answers to each type 3 query

// Input Format

// The first line of input contains an integer, . The next  lines each contain an above mentioned query.

// Constraints

// Constraints



// All queries are valid.

// Sample Input

// STDIN   Function
// -----   --------
// 10      operations[] size n = 10
// 1 97    operations = ['1 97', '2', '1 20', ....]
// 2
// 1 20
// 2
// 1 26
// 1 20
// 2
// 3
// 1 91
// 3
// Sample Output

// 26
// 91


#include <stdio.h>
#include <stdlib.h>
#define Max 100

int stack[Max], maxelement[Max], maxindex = -1, index1 = 0;

void push(int x) {
    stack[index1++] = x; 
    if (maxindex == -1 || x >= maxelement[maxindex]) {
        maxelement[++maxindex] = x;
    }
}

void pop() {
    if (index1 == 0) return;
    if (stack[index1 - 1] == maxelement[maxindex]) {
        maxindex--;
    }
    index1--;
}

int getMax() {
    return maxelement[maxindex];
}

int main() {
    int n, x;
    scanf("%d", &n);
    char op[10];

    for (int i = 0; i < n; i++) {
        scanf("%s", op);
        if (op[0] == '1') {
            scanf("%d", &x);
            push(x);
        } else if (op[0] == '2') {
            pop();
        } else if (op[0] == '3') {
            printf("%d\n", getMax());
        }
    }

    return 0;
}