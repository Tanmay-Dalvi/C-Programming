#include <stdio.h>
#include <string.h>

int main() {
    char str[3][10];
    for(int i=0;i<3;i++) {
        scanf("%s", str[i]);
    }
    for(int i=0;i<3;i++) {
        printf("%s\n", str[i]);
    }
    printf("%s\n", str[0]);
    printf("%s\n", str[1]);
    printf("%s\n", str[2]);
}