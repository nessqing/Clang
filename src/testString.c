#include<stdio.h>

int main(){
    char singleChar = 'a';
    printf("%c\n", singleChar);

    char oneString[] = "ab";
    printf("%s\n", oneString);

    printf("%c\n", *oneString);

    return 0;
}