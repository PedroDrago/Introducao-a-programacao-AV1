#include <stdio.h>

int main(){
    float montante, capital_inicial, juros;
    int tempo;

    printf("Digite o capital inicial do investimento: ");
    scanf("%f", &capital_inicial);
    
    printf("Digite a taxa de juros do investimento: ");
    scanf("%f", &juros);

    printf("Digite o tempo de rendimento do investimento: ");
    scanf("%i", &tempo);

    montante = capital_inicial * (1+juros) * tempo;
    printf("montante: %.2f", montante);

    if(montante >= (capital_inicial*2)){
        printf("Investimento seguro.");
    }
    else{
        printf("Investimento sem seguranca");
    }
}