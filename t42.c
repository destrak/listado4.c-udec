#include <stdio.h>
#include <stdlib.h>
long long mcm(long long n1, long long n2){
	long long  result;
	if(n1 > n2){
		result=n1;}
		else{
			result=n2;
		}
		while(result % n1 !=0 || result % n2 !=0){
			result++;
		}
		return(result);
	}



		

int main(){
	long long int n1;
	printf("ingrese el primer numero\n");
	scanf("%lld", &n1);
	long long int n2;
	printf("ingrese el segundo numero\n");
	scanf("%lld", &n2);
	long long int mcm1;
	mcm1 = mcm(n1, n2);
	printf("el minimo comun multiplo sera: %lld\n", mcm1);
	return 0;
}