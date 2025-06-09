#include<stdio.h>
int main()
{
//decalare fvar
double height = 20;
double width = 10;
double perimeter = 0.0;
double area = 0.0;
// performing calculation
perimeter = 2.0 * (height + width);
area = width * height;

//displaying input
printf("Width is %f, The Height is %f, The perimeter is : %f\n", width,height,perimeter);
printf("The area is : %f\n", area);

 return 0;
}