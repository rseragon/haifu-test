#include <stdio.h>

#ifndef __GNUC__
    #error "Only works in Gnu compilers"
#endif

#if __STDC_VERSION__ < 201112l
    #error "Only C11 and above"
#endif

int add_int(int a, int b) { return a + b; }
float add_float(float a, float b) { return a + b; }

#define add(A, B) _Generic((A),\
                            int: add_int,\
                            double: add_float)(A, B)

int main(void) {
    printf("1+1 = %d\n", add(1, 1));
    printf("21.1+31.3 = %f\n", add(21.1, 31.3));
}
