//PROGRAM FO AnB
#include<stdio.h>
int main(void){
	int U[] ={1,2,3,4,5,6,7,8,9,10};
	int A[] ={4,5,6,7};	
	int B[] = {6,7,8};
	int SA[] = {0,0,0,1,1,1,1,0,0,0,};
	int SB[] = {0,0,0,0,0,1,1,1,0,0};
	int SC[10];
	int I[10];
	int i,j,k = 0;
	for (i = 0 ;i <10;i++){
		if (SA[i] == 1 && SB[i]==1){
			SC[i] = 1;
		}
		else{
			SC[i] = 0;
		}
	}
	for ( i = 0;i<10;i++){
		if ( SC[i] ==1){
			I[k++] = U[i];
		}
	}
	for ( i = 0 ;i <k ; i++){
		printf("%d,",I[i]);
	}
	return 0;
	}

