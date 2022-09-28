#include <stdio.h>

int main(){
    char sexo;
    float altura, peso_ideal;

    printf("Digite o sexo: ");
    scanf("%c", &sexo);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    

    if(sexo == 'f'){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal para uma mulher com %.2f de altura eh %.1f Kg",altura, peso_ideal);
    }
    if(sexo == 'm'){
        peso_ideal = (72.7 * altura) - 58;
        printf("O peso ideal para um homem com %.2f de altura eh %.1f Kg",altura, peso_ideal);
    }
}