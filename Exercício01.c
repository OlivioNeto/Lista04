/*
1. Crie um programa que preencha um vetor de 5 posições e:

	- imprima a soma de todos os valores;
	- imprima apenas os valores pares;
	- imprima o maior e o menor valor do vetor;
	- imprima o dobro de todos os valores;
	- imprima a raiz quadrada dos valores ímpares;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5
int main (){
    int vetorA[N], vetorS[N], vetorD[N], soma, maior =0, menor = 20,i;
    float raiz; 
    srand(time(NULL));
    for(i=0; i<N; i++){
        vetorA[i] = rand()%16; 
    } for(i=0; i<N; i++){
        vetorS[i] = vetorA[i] + vetorA[i]; 
    } printf("A soma dos valores é:\n"); 
    for(i=0; i<N; i++){
        printf("\n\n VA[%d]=%2d  -  VS[%d]=%2d\n", i,vetorA[i],i,vetorS[i]); 
    } printf("\n\n"); 

    printf("Os valores pares são: \n"); 
    for(i=0;i<N;i++){
        if(vetorA[i] % 2 == 0){
            printf("VA[%d]=%2d\n", i,vetorA[i]);
        }
    } printf("\n\n"); 

    printf("O maior valor é: \n"); 
    for(i=0;i<N;i++){
        if(vetorA[i] > maior){
           maior = vetorA[i];
        }  printf("VMaior[%d]=%2d\n", i,maior);
    } printf("\n\n");

    printf("O dobro dos valores é:\n ");
    for(i=0;i<N;i++){
        vetorD[i] = 2 * vetorA[i];
        printf("VMaior[%d]=%2d\n", i,maior);
    } for(i=0;i<N;i++){
        printf("\n\n VA[%d]=%2d  -  VDrobro[%d]=%2d\n", i,vetorA[i],i,vetorD[i]); 
    } printf("\n\n");

    printf("O a raiz quadrada dos impares é: \n"); 
    for(i=0;i<N;i++){
        if(vetorA[i] % 2 == 0){
           raiz = sqrt(vetorA[i]);
        }  printf("VRaiz[%d]=%2d\n", i,raiz);
    }
}