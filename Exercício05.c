/*
5. Crie um programa que crie um vetor de 10 posições e preencha com valores inteiros. 
Crie um segundo valor que será preenchido com os valores pares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10
int main (){
    int vetA[N], vetB[N], i;
    srand(time(NULL));
    for(i=0; i<N; i++){
        vetA[i] = rand()%16; 
        vetB[i] = rand()%16; 
        printf("\n\n A[%d]=%2d", i,vetA[i]); 
    }
    printf("\n\n"); 
    for(i=0; i<N; i++){ 
        if(vetA[i] % 2 == 0){
        vetB[i] = vetA[i]; 
        printf("VB[%d]=%2d", i,vetB[i]); 
        }
    }

}