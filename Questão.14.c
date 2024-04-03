#include <stdio.h>
#include <math.h>

// Função de multiplicação
int multiplicacao(int a, int b){
    return a * b;
}
// Função Soma
int adicao(int a, int b){
    return a + b;
}

//Função Divisão
int divisao(int a, int b){
    return a / b;
}

// Função de subtração
int subtracao(int a, int b){
    return a - b;
}

// Função de potenciação
int potenciacao(int a, int b){
  return pow(a, b);
}

// Função de raiz quadrada
int radiciacao(int a){
  return pow(a, 0.5);
 }

int main() {
  
    int (*pFuncao)(int, int); // Declaração de um ponteiro para uma função que retorna um int e aceita dois int como argumentos

    int (*pFuncaoRadiciacao)(int); // Declaração de um ponteiro para uma função que retorna um int e aceita dois int como argumentos


    pFuncao = adicao; // Atribui o endereço da função adição ao ponteiro
    printf("Soma: %d\n", pFuncao(100, 10)); // Chama a função através do ponteiro

    pFuncao = subtracao; // Atribui o endereço da função subtracao ao ponteiro
    printf("Subtração: %d\n", pFuncao(100, 10)); // Chama a função através do ponteiro

    pFuncao = multiplicacao; // Atribui o endereço da função multiplicacao ao ponteiro
    printf("Multiplicação: %d\n", pFuncao(100, 10)); // Chama a função através do ponteiro

    pFuncao = divisao; // Atribui o endereço da função divisao ao ponteiro
    printf("Divisão: %d\n", pFuncao(100, 10)); // Chama a função através do ponteiro

    pFuncao = potenciacao; // Atribui o endereço da função potenciacao ao ponteiro
    printf("Potenciação: %d\n", pFuncao(10, 4)); // Chama a função através do ponteiro

    pFuncaoRadiciacao = radiciacao; // Atribui o endereço da função radiciacao ao ponteiro
    printf("Radiciação: %d\n", pFuncaoRadiciacao(100)); // Chama a função através do ponteiro

    return 0;
}
