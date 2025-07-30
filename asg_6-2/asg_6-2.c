#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    float real;
    float imag;
}complex;
void addComplex(complex *c1, complex *c2);
int main () {
    complex c1, c2;
    printf("For the first complex number:\n");
    printf("Enter the real and imaginary part respectively: \n");
    scanf("%f", &c1.real);
    scanf("%f", &c1.imag);
    printf("\nFor the second complex number:\n");
    printf("Enter the real and imaginary part respectively: \n");
    scanf("%f", &c2.real);
    scanf("%f", &c2.imag);

    addComplex(&c1, &c2);
    return 0;
}

void addComplex(complex *c1, complex *c2) {
    complex result;
    result.real = c1->real + c2 ->real;
    result.imag = c1 ->imag + c2 ->imag;
    printf("\nSum = %.1f + %.1fi\n", result.real, result.imag);
}
