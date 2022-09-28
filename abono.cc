#include <stdio.h>

int main(){
    float salario, abono, salario_acrescido;
    char sexo;
    int ano_nascimento, idade;

    printf("Digite o sexo: ");
    scanf("%c", &sexo);

    printf("Digite o salario: ");
    scanf("%f", &salario);
    
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    idade = 2022 - ano_nascimento;
    if(idade >= 40){
        abono = salario * 0.15 ;
    }
    if(idade < 40){
        abono = salario * 0.25;
    }
    salario_acrescido = salario + abono;

    printf("Idade: %i\n", idade);
    printf("Salario bruto: %.2f\n", salario);
    printf("Valor do abono: %.2f\n", abono);
    printf("Salario bruto acrescido do valor do abono: %.2f\n", salario_acrescido);
}