#include <stdio.h>

int main(){
    float conta_de_luz;

    printf("Digite o valor da conta de luz: ");
    scanf("%f", &conta_de_luz);

    if(conta_de_luz > 50.0){
        printf("Voce esta gastando muito");
    }
}