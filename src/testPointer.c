#include <stdio.h>

//----------Test Squaring - pass by reference start----------
void square(float *x){
    *x = (*x) * (*x);
}
//----------Test Squaring - pass by reference end----------


int main() {

//----------Test Pointer start----------
    int num = 5;
    int *pNum = &num;  

    printf("num value is %d\n", num);
    printf("&num value is %p\n", &num);
    printf("pNum is %p\n", pNum);
    printf("&pNum is %p\n", &pNum);
    printf("*pNum is %d\n", *pNum);
//----------Test Pointer end----------


//----------Test Squaring - pass by reference start----------
    float x = 1.1;
    square(&x);
    printf("After squaring, the value of x is %.2f\n", x);
//----------Test Squaring - pass by reference end----------
    
    return 0;
}
