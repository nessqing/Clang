#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char str[80] = "Hello how are you - my name is - haru";
    const char s[2] = "-";
    char *token;
    // char *token;
    //Get first token
    token = strtok(str, s);
    

    //Walk through other tokens
    while(token != NULL){
        printf("%s\n", token);
        token = strtok(NULL, s);
    }
    return 0;
    

}


