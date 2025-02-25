// In this challenge, create an array of size  dynamically, and read the values from stdin. Iterate the array calculating the sum of all elements. Print the sum and free the memory where the array is stored.

// While it is true that you can sum the elements as they are read, without first storing them to an array, but you will not get the experience working with an array. Efficiency will be required later.

// Input Format

// The first line contains an integer, .
// The next line contains  space-separated integers.

// Constraints



// Output Format

// Print the sum of the integers in the array.

// Sample Input 0

// 6
// 16 13 7 2 1 12 
// Sample Output 0

// 51
// Sample Input 1

// 7
// 1 13 15 20 12 13 2 
// Sample Output 1

// 76

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    scanf("%d", &size);
    int a[size];
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    int add=0;
    for(int i=0; i<size; i++){
        add=add+a[i];
    }
     printf("%d\n", add);
      
    return 0;
}
