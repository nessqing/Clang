#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Variables of type char occupy %u\n", sizeof(char));
    printf("Variables of type char occupy %u\n", sizeof(short));
    printf("Variables of type char occupy %u\n", sizeof(int));
    printf("Variables of type char occupy %u\n", sizeof(long));
    printf("Variables of type char occupy %u\n", sizeof(long long));
    printf("Variables of type char occupy %u\n", sizeof(float));
    printf("Variables of type char occupy %u\n", sizeof(long double));

    return 0;
}