#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char palindromo(char *cadena1){
int aux=strlen(cadena1);
	for(int i=1; i<aux;i++){
			if(cadena1[i]==cadena1[aux-i-2]){
				return 1;
			}
			else{
			}	
				return 0;
			}
}

 int main()
{	int j=0;
	printf("ingrese la palabra\n");
	char cadena2[100];
	char cadena1[100];
fgets(cadena2, 100, stdin);
	for(int i=0; i<strlen(cadena2); i++){
		
if(cadena2[i]!= ' '){
	cadena1[j]=cadena2[i];
	j++;
}
}	
int n;
n= palindromo(cadena1);
printf("la cadena arroja %d\n", n);


	return 0;
}