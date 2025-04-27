#include <stdio.h>
#include <string.h>

//----------Test Pointer start----------
// int main() {
//     int num = 5;
//     int *pNum = &num;  

//     printf("num value is %d\n", num);
//     printf("&num value is %p\n", &num);
//     printf("pNum is %p\n", pNum);
//     printf("&pNum is %p\n", &pNum);
//     printf("*pNum is %d\n", *pNum);
//     return 0;
// }
//----------Test Pointer end----------


//----------Test Squaring - pass by reference start----------
// void square(float *x){
//     *x = (*x) * (*x);
// }

// int main(){
//     float x = 1.1;
//     square(&x);
//     printf("After squaring, the value of x is %.2f\n", x);
//     return 0;
// }

//----------Test Squaring - pass by reference end----------

//----------Test Pointer and array start----------
// int main (void){
// int i;
// char multiple[] = "a string";
// char *p = multiple;

// for(i = 0; i < strlen(multiple); ++i)
// printf("multiple[%d] = %c  *(p+%d) =  %c  &multiple[%d] = %p  p+%d = %p\n",
// i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);

// return 0;

// }
//----------Test Pointer and array end----------


//----------Test Pointer and loop start----------
// int main (){
//     int i;
//     char multiple[]="aabbcc";
//     char *p = multiple;

//     for( i=0 ; i < strlen(multiple); ++i)
//     printf("%c", multiple[i]);
//     return 0;
// }


int main() {
    int array[] = {1, 2, 3, 4, 5};
    int *p = array;
    int *arrayEnd = array + sizeof(array)/sizeof(array[0]);
    int sum = 0;
    printf("%p\n", (void *)array);
    while (p < arrayEnd)
        sum += *p++;

    printf("The value is %d", sum);

    return 0;
}
//----------Test Pointer and loop end----------