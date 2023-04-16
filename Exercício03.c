/*
3. Crie um programa que tenha 3 vetores de 5 posições (vet_A, vet_B e vet_C). O vetor vet_C é 
a soma dos vetores vet_A + vet_B. Mostre vet_C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5
int main (){
    int A[N], B[N],C[N], i;
    srand(time(NULL));
    for(i=0; i<N; i++){
        A[i] = rand()%16; 
        B[i] = rand()%16; 
        printf("\n\n A[%d]=%2d  -  B[%d]=%2d\n", i,A[i],i,B[i]); 
    }
    for(i=0; i<N; i++){
        C[i] = A[i] + B[i];
    } printf("\n\n");
    for(i=0; i<N; i++){
        printf("C[%d]=%2d\n", i,C[i]); 
    }
}
