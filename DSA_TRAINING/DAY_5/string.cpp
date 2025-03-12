#include <stdio.h>
#include <string.h>

int main() {
    char *str[]={ "Hello", "World" };
    for (int i = 0; i < 2; i++) {
        printf("%c", str[i]);
    }
}