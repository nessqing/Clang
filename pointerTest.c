#include <stdio.h>
#include <strings.h>

int main() {
    char s1[] = "Hello";
    char s2[] = "hello";
    
    printf("%d\n", strcasecmp(s1,s2));


    if (strcasecmp(s1, s2) == 0) {
        printf("The strings are equal (case insensitive).\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}


