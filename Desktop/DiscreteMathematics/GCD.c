#include<stdio.h>
int main(){
	int a,b,c= 2,gcd  = 1;
	printf("Enter any two  number:\t");
	scanf("%d %d",&a,&b);
	while(1){
		if ( a % c == 0&& b %c == 0){
			gcd = gcd*c;
			a = a/c;
			b = b/c;
		        
		}else{
	c++;
	}
		if ( c > a|| c>b){
			break;
	}
	}
		printf("The GCD  = %d",gcd);
	return 0;
}

