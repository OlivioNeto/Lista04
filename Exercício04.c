/*
4. Crie um programa que tenha 2 vetores de 5 posições (vet_A, vet_B) e crie um vetor resultante vet_C 
com 10 posições que receba vet_a nas primeiras 5 posições e o vetor vet_B nas últimas 5 posições.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5
int main (){
    int A[N], B[N],C[2*N], i;
    srand(time(NULL));
    for(i=0; i<N; i++){
        A[i] = rand()%16; 
        B[i] = rand()%16; 
        printf("\n\n A[%d]=%2d  -  B[%d]=%2d\n", i,A[i],i,B[i]); 
    }for (i=0; i<N; i++){
        C[i] = A[i];
        C[i+N] = B[i];
    } printf("\n\n"); 
    for(i=0; i<N; i++){
        printf("C[%d]=%2d\n", i,C[i]); 
    }
}