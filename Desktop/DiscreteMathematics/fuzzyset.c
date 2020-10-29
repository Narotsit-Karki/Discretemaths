#include<stdio.h>
int main(void){
	int i,j;
	int A[] = {3,4,5};
	int B[] = {4,5,6};
	printf("{");
	for (i = 0;i < 3;i++){
		
		for ( j = 0; j < 3 ; j++){
		printf("(%d,%d)",A[i],B[j]);
		if ( i <= 1 && j <=1){
				printf(",");
	
		}
	}
	}
	printf("}");

return 0;
}

