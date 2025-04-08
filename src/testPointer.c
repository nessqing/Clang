#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    printf("a value is %d\n", a);
    printf("&a value is %p\n", &a);
    printf("P is %p\n", p);
    printf("&p is %p\n", &p);
    printf("*p is %d\n", *p);

    return 0;
}
