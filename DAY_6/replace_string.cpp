#include <stdio.h>

void replace(char str[], char c_char[], char newchar[]) {
    char store[100];
    int i=0, j=0, k, match;
    while(str[i]!='\0') {
        for(k=0; c_char[k]!='\0'; k++) {
            if(str[i+k]!=c_char[k]) {
                match = 0;
                break;
            }
        }
        if(match){
            for(k=0;newchar[k]!='\0';k++) {
                store[j++]=newchar[k];
                
            }
        }
    }
}
int main () {

}