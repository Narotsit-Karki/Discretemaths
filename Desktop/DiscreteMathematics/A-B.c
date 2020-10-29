#include<stdio.h>
int main(void){
	int U[]= {1,2,3,4,5,6,7,8,9,10};
	int A[] = {1,2,4,6};
	int B[] = { 2,6,7,9};
	int SA[] = {1,1,0,1,0,1,0,0,0,0};
	int SB[] = { 0,1,0,0,0,1,1,0,1,0};
	int SD[10],C[10];
	int i , j = 0;
	for (i = 0; i < 10; i++){
		if(SA[i] == 1 && SB[i] == 1){
			SA[i] = 0;
		
		}
	}
	for ( i = 0; i <10 ;i++){
		if(SA[i] ==1){
			C[j++] = U[i];
		}
	
	}
	print("\n");
		for (i =0 ;i < j ;i++){
			printf("%d,",C[i]);
		}
		return 0;
	}
