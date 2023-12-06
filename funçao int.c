#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tamanho 2

float soma (int numero[]) {
float resultadosoma;
int i;
for ( i = 0; i < 2; i++)
{
   resultadosoma = numero[0] + numero[1];
}
   printf("Resultado da soma   %.2f\n", resultadosoma);
    return  resultadosoma;
   }

float subtracao (int numero[]) {
float resultadosubtracao;
int i;
for ( i = 0; i < 2; i++)
{
    resultadosubtracao = numero[0] - numero[1];
}
  printf("Resultado da subtracao %.2f\n", resultadosubtracao);
  return resultadosubtracao;
   } 

float divisao (float numero[]) {
float resultadodivisao;
int i;
for ( i = 0; i < 2; i++)
{

  resultadodivisao =  numero[0] / numero[1];
  printf("Resultado da divisão %.2f\n", resultadodivisao);
   return resultadodivisao;
}

   }
 
float multiplicacao (int numero[]) {
float resultadomultiplicacao;
int i;
for ( i = 0; i < 2; i++)
{
  resultadomultiplicacao =  numero[0] * numero[1];
}
 printf("Resultado da multiplicação  %.2f", resultadomultiplicacao);
  return resultadomultiplicacao;
   }

int main () {
int j = 0;
int i;
int numero[2];

setlocale(LC_ALL, "portuguese");

 for ( i = 0; i < 2; i++)
 {
    j++;
    printf("Digite o %dº número\n", j);
    scanf("%d", &numero[i]);
 }
 
   soma (numero);
   subtracao (numero);
   divisao (numero);
   multiplicacao (numero);

 return 0;
 }
