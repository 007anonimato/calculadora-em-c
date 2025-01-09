#include<stdio.h>
#include<stdlib.h>

// prototipos de funcoes
int menu();
float soma(float num1, float num2);
float subtracao(float num1, float num2);
float multiplicacao(float num1, float num2);
float divisao(float num1, float num2);
int fatorial(int num);
void main(){

int op;
float numero1, numero2, res;
int numeroF, resF;
do{
system("cls");
op=menu();

switch(op){
    case 1: printf("Digite o primeiro numero\n");
            scanf("%f",&numero1);
            printf("Digite o segundo numero\n");
            scanf("%f",&numero2);
            res = soma(numero1,numero2);
            printf("\n A soma de %2.f e %2.f é igual a = %2.f", numero1, numero2, res);
    break;
    case 2: printf("Digite o primeiro numero\n");
            scanf("%f",&numero1);
            printf("Digite o segundo numero\n");
            scanf("%f",&numero2);
            res = subtracao(numero1,numero2);
            printf("\n A subtracao de %2.f e %2.f é igual a = %2.f", numero1, numero2, res);
    break;
    case 3: printf("Digite o primeiro numero\n");
            scanf("%f",&numero1);
            printf("Digite o segundo numero\n");
            scanf("%f",&numero2);
            res = multiplicacao(numero1,numero2);
            printf("\n A multiplicacao de %2.f e %2.f é igual a = %2.f", numero1, numero2, res);
    break;
    case 4: printf("Digite o primeiro numero\n");
            scanf("%f",&numero1);
            printf("Digite o segundo numero\n");
            scanf("%f",&numero2);
            res = divisao(numero1,numero2);
            printf("\n A divisao  de %2.f e %2.f é igual a = %2.f\n", numero1, numero2, res);
    break;
    case 5: printf("Digite o numero fatorial:\n");
            scanf("%d",&numeroF);
            resF = fatorial(numeroF);
            printf("\n O fatorial de %d e %d.\n", numeroF, resF);
    break;        
    case 6: printf("Voce saiu do sistema.");
    break;
    default: printf("Numero invalido");

}
system("pause");

}while(op!=5);


}



int menu(){
    int opcao;

printf("1 soma\n");
printf("2 subtracao\n");
printf("3 multiplicacao\n");
printf("4 divisao\n");
printf("5 fatorial\n");
printf("6 sair\n\n");
printf("Escolha a operação que deseja fazer: ");
scanf("%d",&opcao);

return opcao;
}
float soma(float num1,float num2){
    return num1+num2;
}
float subtracao( float num1, float num2){
        return num1-num2;
}
float multiplicacao(float num1, float num2){
    return num1*num2;
}
float divisao(float num1, float num2){
    return num1/num2;
}
int fatorial(int num){
if(num==0){
    return 1;
}else{
    return num *fatorial(num-1);
}
}
