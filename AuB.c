// PROGRAM FOR A UNION B
#include<stdio.h>
int main(void){
	int U[] = {1,2,3,4,5,6,7,8,9,10};
	int A[] = {3,4,5};
	int B[] = {5,6,7,8};
	int SA[10]= {0,0,1,1,1,0,0,0,0,0};
	int SB[10] ={0,0,0,0,1,1,1,1,0,0};
	int SC[10],SD[10],AuB[10];
	int i,j,k = 0;

	for (i =0 ;i<10;i++){
		if (SA[i] == 1 || SB[i] == 1){
			SC[i] = 1;
		}else{
			SC[i] = 0;
		}

		
	}
	for ( i = 0; i<10; i++){

	if ( SC[i] == 1){
		AuB[k++] = U[i];
	}
	}
printf("\n");
	for ( i = 0; i< k; i++){
		printf("%d,",AuB[i]);
	}
   return 0;
}
