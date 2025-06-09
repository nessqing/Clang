void square(float *x){
    *x = (*x) * (*x);
}

int main(){
    float x = 1.1;
    square(&x);
    printf("After squaring, the value of x is %.2f\n", x);
}