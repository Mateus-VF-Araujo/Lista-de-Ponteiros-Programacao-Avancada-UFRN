// Respostas Idealizadas --> endereço de memória = 4092:

/* char: 1 byte --> x+1 = 4093, x+2 = 4094 e x+3 = 4095*/

/* int: 2 bytes --> x+1 = 4094, x+2 = 4096 e x+3 = 4098*/

/* float: 4 bytes --> x+1 = 4096, x+2 = 4100 e x+3 = 4104*/

/* double: 8 bytes --> x+1 = 4100, x+2 = 4108 e x+3 = 4116*/

#include <stdio.h>

int main() {
    char VetorX_char[4];
    int VetorX_int[4];
    float VetorX_float[4];
    double VetorX_double[4];
    int i;

  
    printf("\nEndereços x, x+1, x+2 e x+3 para x declarado como char:\n");
    for (i = 0; i < 4; i++) {
        printf("%p\n", (VetorX_char + i));
    }

    printf("\nEndereços x, x+1, x+2 e x+3 para x declarado como int:\n");
    for (i = 0; i < 4; i++) {
        printf("%p\n", (VetorX_int + i));
    }

    printf("\nEndereços x, x+1, x+2 e x+3 para x declarado como float:\n");
    for (i = 0; i < 4; i++) {
        printf("%p\n", (VetorX_float + i));
    }

    printf("\nEndereços x, x+1, x+2 e x+3 para x declarado como double:\n");
    for (i = 0; i < 4; i++) {
        printf("%p\n", (VetorX_double + i));
    }

    return 0;
}

/* A única diferença entre as respostas idealizadas e as respostas do
  programa é que a váriavel do tipo int do programa tem 4 bytes, enquanto a váriavel int idealizada tem 2 bytes.*/
