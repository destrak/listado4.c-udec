#include <stdio.h>
#include <stdlib.h>
long long mcd(long long n1, long long n2){
	long long  result=1;
	for(long long int i=1; i<=n2; i++){
		if(n1 % i ==0 && n2 % i ==0){
			result=i;
		}
		}return(result);
	}
	
	
	int main(){
	long long int n1;
	printf("ingrese el primer numero\n");
	scanf("%lld", &n1);
	long long int n2;
	printf("ingrese el segundo numero\n");
	scanf("%lld", &n2);
	long long int mcd1;
	mcd1 = mcd(n1, n2);
	printf("el maximo comun divisor sera: %lld\n", mcd1);
	return 0;
}