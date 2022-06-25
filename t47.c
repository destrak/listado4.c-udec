//resuelto con ayuda
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int caracteresComunes(char* cadena1, char* cadena2){
	int contador;
	int i,j;
	int aux1= strlen(cadena1);
	int aux2= strlen(cadena2);
	char caracterescontados[aux1];
	int contados=0;
	for (int i = 0; i <aux1; ++i){ 	// compara el caracter con los caracteres de la otra cadenay cuando ya este contado rompa ciclo
		int c=cadena1[i];
		contador=0;	
		for(j=0; j<contados;j ++){
			if(c==caracterescontados[j]){
				contador=1;
				break;}
	}
	
	if(!contador){
		for(int j=0; j<aux2; j++){
			if(cadena2[j]==c){
				caracterescontados[contados]=c; //si el caracter ya fue contado que rompa el ciclo
				contados++;
				break;
}
}
}
}
return contados;
}
 int main(int argc, char const *argv[])
{ 
	char cadena1[100];
	printf("ingrese la primera oracion\n");
	fgets(cadena1, 100, stdin);
	char cadena2[100];
	printf("ingrese la segunda oracion\n");
	fgets(cadena2, 100, stdin);
	int contador;
	contador = caracteresComunes(cadena1, cadena2);
	printf("los caracteres comunes son %d\n",  contador-1);


	
	return 0;
}