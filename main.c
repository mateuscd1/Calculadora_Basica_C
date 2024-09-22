#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Calculadora Básica em C
  Feita por: Mateus Dutra
  Cursando 2 período Engenharia da Computação - UEMA
  Data inicio: 03/05/2023
  Feito com intuito de treino/estudo
  */

//DECLARAÇÃO DAS FUNÇÕES

void introduction ();
void somavalores();
void subtracaovalores();
void multiplicaovalores ();
void raizquadradavalores ();
void divisaovalores ();
void potenciaovalores();
void fatorialnumeros ();
void CalcularAngulos ();

int main()
{
    //declaração para compilar em português
    setlocale(LC_ALL, "portuguese");

    int opcao;

   do{
    introduction();

    printf("\nDigite a opção a ser feita: ");
    scanf("%d", &opcao);

    switch(opcao){

    case 1:
    somavalores();
    break;

    case 2:
    subtracaovalores();
    break;

    case 3:
    multiplicaovalores ();
    break;

    case 4:
    divisaovalores ();
    break;

    case 5:
    raizquadradavalores ();
    break;

    case 6:
    potenciaovalores();
    break;

    case 7:
    fatorialnumeros();

    break;

    case 8:
    CalcularAngulos();

    break;

    case 9:
    printf("\n--------Obrigado por usar. Volte sempre!:)--------\n");
    getch();

    break;

    default:

    printf("\n----Opcação inválida!----");
    printf("\n\n----Clique em qualquer tecla para retornar ao menu!----\n");
    getch();
    break;

    }
    } while(opcao!=9);

return 0;
}


void introduction (){
printf("\n\n|-------------------------------------------|\n");
printf("|------------Calculadora Básica-------------|\n");
printf("|-------------------------------------------|\n");
printf("|------------By: Mateus Dutra---------------|\n");
printf("|-------------------------------------------|\n");
printf("|--------Escolha uma das opções abaixo------|\n");
printf("|-------------------------------------------|\n");
printf("|1 - SOMA DE NÚMEROS                        |\n");
printf("|2 - SUBTRAÇÃO DE NÚMEROS                   |\n");
printf("|3 - MULTIPLICAÇÃO DE VALORES               |\n");
printf("|4 - DIVISÃO DE VALORES                     |\n");
printf("|5 - RAIZ QUADRADA                          |\n");
printf("|6 - POTENCIAÇÃO                            |\n");
printf("|7 - FATORIAL DE UM NÚMERO                  |\n");
printf("|8 - CALCULAR ÂNGULO[SEN/COS/TANG]          |\n");
printf("|9 - SAIR                                   |\n");
printf("|-------------------------------------------|\n");
}

void somavalores(){

    printf("\n------------SOMA VALORES-------------------\n");
    printf("OBS: Valores que tem casas decimais, use uma vírgula. Ex: 3,5\n");
    printf("---------------------------------------------\n");


    char cont;

   do{

    int n;
    float valor;
    float soma=0;
    int i=0;



    printf("\nDigite quantos valores irá somar: ");
    scanf("%d", &n);

        while(i<n){
            printf("\nDigite o valor %d: ", i+1);
            scanf("%f", &valor);
            soma += valor;
            i++;
        }

    printf("\n--------------------------------------------------\n");
    printf("O resultado da soma dos %d números é: %2.f", n, soma);
    printf("\n--------------------------------------------------\n");

    fflush(stdin);
    printf("\n\nDeseja fazer outra conta[s/n]: ");
    scanf("%c", &cont);

    }while(cont=='s');
    printf("\n\n---------- Aperte qualquer tecla para retornar ao menu ----------------");
   getch();

}

void subtracaovalores(){


    printf("\n----------SUBTRAÇÃO DE VALORES-------------\n");
    printf("OBS: Valores que tem casas decimais, use uma vírgula. Ex: 3,5\n");
    printf("---------------------------------------------\n");


    char cont;

   do{

    int n, i, numero, resultado;

   printf("\nQuantos números você deseja subtrair? ");
   scanf("%d", &n);

   printf("\nDigite o 1 número: ");
   scanf("%d", &resultado);

   for (i = 1; i < n; i++) {

      printf("\nDigite o número %d: ", i+1);
      scanf("%d", &numero);
      resultado -= numero;
   }
   printf("\n\n---------------------------\n");
   printf("Resultado: %d", resultado);
   printf("\n-----------------------------\n");

    fflush(stdin);
    printf("\n\nDeseja fazer outra conta[s/n]: ");
    scanf("%c", &cont);

    }while(cont=='s');
    printf("\n\n---------- Aperte qualquer tecla para retornar ao menu ----------------");
   getch();


}

void multiplicaovalores (){

    printf("\n--------MULTIPLICAÇÃO DE VALORES---------\n");
    printf("OBS: Valores que tem casas decimais, use uma vírgula. Ex: 3,5\n");
    printf("---------------------------------------------\n");

    char cont;

   do{

    int n, i;
    float numero;
    float resultado;

   printf("\nQuantos números você deseja multiplicar?: ");
   scanf("%d", &n);

   printf("\nDigite o 1 número: ");
   scanf("%f", &resultado);

   for (i = 1; i < n; i++) {

      printf("\nDigite o número %d: ", i+1);
      scanf("%f", &numero);
      resultado *= numero;
   }
   printf("\n\n---------------------------\n");
   printf("Resultado: %.2f", resultado);
   printf("\n-----------------------------\n");

    fflush(stdin);
    printf("\n\nDeseja fazer outra conta[s/n]: ");
    scanf("%c", &cont);

    }while(cont=='s');
    printf("\n\n---------- Aperte qualquer tecla para retornar ao menu ----------------");
    getch();


}

void divisaovalores (){
    printf("\n----------DIVISÃO DE VALORES-------------\n");
    printf("OBS: Valores que tem casas decimais, use uma vírgula. Ex: 3,5\n");
    printf("---------------------------------------------\n");


    int i;
    float n1, n2, resultado;
    char opcao;

    do{
            printf("\nDigite o valor do número 1: ");
            scanf("%f", &n1);
            printf("\nDigite o valor do número 2: ");
            scanf("%f", &n2);

            resultado=n1/n2;

            printf("\n\n---------------------------\n");
            printf("O resultado é igual a: %.2f", resultado);
            printf("\n-----------------------------\n");

            fflush(stdin);
            printf("\n\nDeseja fazer outra conta[s/n]: ");
            scanf("%c", &opcao);

    }while(opcao=='s');
     printf("\n\n---------- Aperte qualquer tecla para retornar ao menu ----------------");
     getch();

}

void raizquadradavalores (){

    printf("\n-------------RAIZ QUADRADA-----------------------------------\n");
    printf("OBS: Valores que tem casas decimais, use uma vírgula. Ex: 3,5\n");
    printf("---------------------------------------------------------------\n");

    float x, raiz;
    char opcao;

   do{
    printf("\nDigite o valor que deseja calcular a raiz quadrada: ");
    scanf("%f", &x);

    raiz=sqrt(x);

    printf("\n\n------------------------------------------------\n");
    printf("A raiz quadrada de %.2f é igual a: %.2f", x, raiz);
    printf("\n--------------------------------------------------\n");

    fflush(stdin);
    printf("\nDeseja fazer outra conta[s/n]?: ");
    scanf("%c", &opcao);

   }while(opcao=='s');
   printf("\n\n---------- Aperte qualquer tecla para retornar ao menu ----------------");
   getch();
}

void potenciaovalores(){

    printf("\n-------------POTENCIAÇÃO VALORES-----------------------------------\n");
    printf("OBS: Valores que tem casas decimais, use uma vírgula. Ex: 3,5\n");
    printf("---------------------------------------------------------------------\n");

    float x1, x2, parcial, resultado;
    char opcao;


    printf("\nDigite o valor da base: ");
    scanf("%f", &x1);
    printf("\nDigite o valor da potência: ");
    scanf("%f", &x2);

    resultado=x1;

  do{
    for(int i=1; i<x2; i++){

        parcial=x1;
        resultado=resultado*parcial;
    }

    printf("\n\n------------------------------------------------\n");
    printf("O valor da potênciação é: %.2f", resultado);
    printf("\n-------------------------------------------------\n");

    fflush(stdin);
    printf("\nDeseja fazer outro calculo[s/n]: ");
    scanf("%c", &opcao);

  }while(opcao=='s');
  printf("\n\n---------- Aperte qualquer tecla para retornar ao menu ----------------");
  getch();

}

void fatorialnumeros (){

    printf("\n-----------------FATORIAL NÚMEROS INTEIROS -----------------");

    int x;
    char opcao;

    do{
    printf("\n\nDigite o número para fazer o fatorial: ");

    if (scanf("%d", &x) != 1 || x != (int)x) {
    printf("Erro! Digite apenas números inteiros.\n");
   }

    if (x<0) {
        printf("\nValor informado incorreto! Fatorial de números negativos não existem.");
    }

    else {

    int fatorial=1;
    for(int i=1; i<=x; i++){
        fatorial=fatorial*i;
     }
       printf("\n\n------------------------------------------------\n");
       printf("O fatorial do número %d é: %d", x, fatorial);
       printf("\n------------------------------------------------");
       fflush(stdin);
       printf("\n\nDeseja fazer outra conta[s/n]: ");
       scanf("%c", &opcao);
    }
    }while(opcao=='s');
    printf("\n\n---------- Aperte qualquer tecla para retornar ao menu ----------------");
    getch();

}

void CalcularAngulos (){

    printf("\n\n-----------------CALCULAR O VALOR EM UM ÂNGULO-------------------");

    int angulo;
    char opcao;

    do{
        printf("\n\n--------------------------------------\n");
        printf("1 - SENO / 2 - COS / 3 - TANG ");
        printf("\n--------------------------------------\n");
        printf("\nDigite a opção que deseja fazer: ");
        scanf("%d", &angulo);
        printf("\n--------------------------------------\n");

        if (angulo==1){
        double x;
        printf("\nDigite o valor que deseja calcular para seno: ");
        scanf("%f", &x);

        float seno;

        seno = sin(x);

        printf("\n\n------------------------------------------------\n");
        printf("O valor de seno(%.2f) é igual a: %.2f", x, seno);
        printf("\n------------------------------------------------\n");
        }

        if(angulo==2){
        double y;
        float cosseno;
        printf("\nDigite o valor que deseja calcular para cosseno: ");
        scanf("%f", &y);

        cosseno=cos(y);

        printf("\n\n------------------------------------------------\n");
        printf("O valor do cosseno %.2f é igual a: %.2f", y, cosseno);
        printf("\n------------------------------------------------\n");
        }


        if(angulo==3){
        double z;
        float tangente;
        printf("\nDigite o valor que deseja calcular para tangente: ");
        scanf("%f", &z);

        tangente=tan(z);

        printf("\n\n------------------------------------------------\n");
        printf("O valor do tangente %.2f é igual a: %.2f", z, tangente);
        printf("\n------------------------------------------------\n");
        }

    fflush(stdin);
    printf("\n\nDeseja fazer outra conta[s/n]: ");
    scanf("%c", &opcao);
    }while(opcao=='s');
    printf("\n\n---------- Aperte qualquer tecla para retornar ao menu ----------------");
    getch();



}
