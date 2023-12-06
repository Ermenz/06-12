#include <string.h>
#include <stdio.h>
#include <locale.h>

// (#define  tam) -> comando para lembrar (usado para definir um valor para uma váriavel, que funcionará independete do void ou int) ;


void openvalues () {

printf("********ALGORITMO FUNÇÃO PAR E IMPAR **************\n");

}

// (verificação de números pares)

void verificationpar (int numero[]) {
int i;
int par = 0;

for ( i = 0; i < 6; i++)
      { 
if (numero[i] % 2 == 0)
 {
    par++;
 }
      }
 printf("Quantidae de pares digitados: %d \n", par);
 printf("\n");
}

// (verificação de números impares)

void verificationimpar (int numero[]) {
int i;
int impar = 0;

for ( i = 0; i < 6; i++)
    {  
   
if (numero[i] % 2 != 0)
 {
    impar++;
 }
    }
  
  printf("Quantidade de impares digitados: %d \n", impar);
}


// (Recebimento de valores)
int main () {

int j = 0;
int i;
int numero[6];
setlocale(LC_ALL, "portuguese");

 openvalues ();
 printf("\n");

for ( i = 0; i < 6; i++)
{
   j++;
   printf("Digite o %dº número: \n", j);
   scanf("%d", &numero[i]);
}

// (Usando função voidimpar e voidpar para verificar se os números são pares ou impares)
printf("\n");
verificationimpar (numero);
printf("\n");
verificationpar (numero);


   return 0;
}


