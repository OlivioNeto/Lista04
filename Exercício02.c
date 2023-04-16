/*
2. Crie um programa que preencha 2 vetores de 5 posições e mostre os valores intercalados;
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
        C[i*2] = A[i];
        C[i*2+1] = B[i];
    } printf("\n\n");
    for(i=0; i<N; i++){
        printf("C[%d]=%2d\n", i,C[i]); 
    }
}