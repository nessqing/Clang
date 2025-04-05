#include <stdio.h>
#include <stdlib.h>
int main(){
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT};
    enum Company xerox = YAHOO;
    printf("The value of xeroxls is : %d\n", xerox);
    return 0;
}