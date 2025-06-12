/*Calculadora simples
Operações básicas (+, -, *, /) com menu interativo.*/
#include <stdio.h>

int main() {
    float n1, n2;
    char operador;
    printf("=====================================================\n");
    printf("               BEM-VINDO A CALCULADORA!\n");
    printf("                  por: JOÃO VITOR!\n");
    printf("=====================================================\n");
            printf("\n\n\n");
    printf("Que operação você deseja efetuar? (+, -, *, /): ");
    scanf("%c", &operador);
    
    printf("Informe o primeiro número: ");
    scanf("%f", &n1);
    printf("Informe o segundo número: ");
    scanf("%f", &n2);
    
    switch(operador){
        case '+':
            float resultadoA = n1 + n2;
            printf("----------ADIÇÃO----------\n");
            printf("    %.2f + %.2f = %.2f", n1, n2, resultadoA);
        break;
        case '-':
            float resultadoS = n1 - n2;
            printf("----------SUBTRAÇÃO----------\n");
            printf("        %.2f - %.2f = %.2f", n1, n2, resultadoS);
        break;
        case '*':
            float resultadoM = n1 * n2;
            printf("----------MULTIPLICAÇÃO----------\n");
            printf("        %.2f x %.2f = %.2f", n1, n2, resultadoM);
        break;
        case '/':
            if (n2 != 0){
                float resultadoD = n1 / n2;
                printf("----------DIVISÃO----------\n");
                printf(    "%.2f / %.2f = %f", n1, n2, resultadoD);
            }
            else {
                printf("Erro: divisão por zero!\n");
                return 1;
            }
            break;
        default:
            printf("Operador inválido.\n");
    }
        printf("\n\n");
    printf("=====================================================\n");
    printf("  Obrigado por usar a Calculadora do João!\n");
    printf("  Que seus cálculos sejam sempre exatos e seus erros\n");
    printf("  nunca sejam por falta de ponto e vírgula! ;)\n");
    printf("=====================================================\n");

    
    return 0;
}