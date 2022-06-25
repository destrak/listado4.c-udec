#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void clear(){
	system("@cls||clear");
}
double operacion(char op, double v1, double v2){
double resultado;

if(op == '+'){
	resultado = v1 + v2;
}
else if(op == '-'){
	resultado = v1 - v2;
}
else if(op == '/'){
	resultado = v1 / v2;
}
else if(op == '*'){
	resultado = v1 * v2;
}
return resultado;
}

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
long long mcd(long long n1, long long n2){
	long long  result=1;
	for(long long int i=1; i<=n2; i++){
		if(n1 % i ==0 && n2 % i ==0){
			result=i;
		}
		}return(result);
	}
		double validarentrada(char op, char * v1, char *v2){
		if(op !='+'|| op !='-'|| op !='*'|| op !='/'){
			return 0;
		}
	}
 int main(int argc, char const *argv[])
{
	int i, j;
char opcion[100];
char aux[] = "operacion";
char aux2[] ="mcm";
char aux3[] ="mcd";
char aux4[] ="salir";
while(1){
	clear();
	printf("porfavor escriba la operacion a usar: \n");
	printf("operacion\n");
	printf("mcm\n");
	printf("mcd\n");
	printf("salir\n");
	fgets(opcion, 100, stdin);

int opcion2;
if(strncmp(opcion, aux, 9)==0){
	while(1){
	clear();
printf("profavor ingrese una opcion valida\n");
printf("escriba 1 para Ingresar operacion\n");
printf("escriba 2 para volver al menu\n");

scanf("%d", &opcion2);
while (opcion2==1){
	clear();
	double v1;
	printf("ingrese el primer numero \n");
	scanf("%lf", &v1);
	char op;

		printf("ingrese la operacion +,-, / o *\n");
	scanf(" %c", &op);
	double v2;
printf("ingrese el segundo numero\n");
	scanf("%lf", &v2);
	double resultado;
	if(op =='+' || op=='-' || op=='*' || op=='/' ){
	resultado = operacion(op,v1,v2);
	printf("el resultado es %lf\n", resultado); return resultado;}
else{
	break;
}

}	
 



if(opcion2==2){
	break;
	
	
}
}
}

if(strncmp(opcion, aux2, 3)==0){
while(1){
	clear();
printf("profavor ingrese una opcion valida\n");
printf("escriba 1 para Ingresar operacion\n");
printf("escriba 2 para volver al menu\n");
scanf("%d", &opcion2);
while (opcion2==1){
	clear();
	int contador=0;
	char c1[100];
	printf("ingrese el primer numero\n");
	scanf("%s", c1);
	
	char  c2[100];
	printf("ingrese el segundo numero\n");
	scanf("%s", c2);
	long long int n1;
	long long int n2;
	for(i=0; i<strlen(c1); i++){
		for(j=0; j<strlen(c2); j++){
			if(c1[i] =='.' || c2[j] == '.'){
				contador++;
			}	
 else if(c1[i]>'9' || c1[i]< '0' || c2[j]>'9' || c2[j]< '0'){
			contador++;
		}
		}
	}
	if(contador >=1){
		break;
	}
		
else{	
n1 = atoi(c1);
n2=atoi(c2);
	long long int mcm1;
	mcm1 = mcm(n1, n2);
	printf("el minimo comun multiplo sera: %lld\n", mcm1);
	return mcm1;

}
}
if(opcion2 == 2){
	break;
}
}
}
if(strncmp(opcion, aux3, 3)==0){
	while(1){
	clear();

printf("profavor ingrese una opcion valida\n");
printf("escriba 1 para Ingresar operacion\n");
printf("escriba 2 para volver al menu\n");
scanf("%d", &opcion2);
while (opcion2==1){
	clear();
	int contador=0;
	char c1[100];
	printf("ingrese el primer numero\n");
	scanf("%s", c1);
	
	char  c2[100];
	printf("ingrese el segundo numero\n");
	scanf("%s", c2);
	long long int n1;
	long long int n2;
	for(i=0; i<strlen(c1); i++){
		for(j=0; j<strlen(c2); j++){
			if(c1[i] =='.' || c2[j] == '.'){
				contador++;
			}	
 else if(c1[i]>'9' || c1[i]< '0' || c2[j]>'9' || c2[j]< '0'){
			contador++;
		}
		}
	}
	if(contador >=1){
		break;
	}
		
else{	
n1 = atoi(c1);
n2=atoi(c2);


	long long int mcd1;
	mcd1 = mcd(n1, n2);
	printf("el maximo comun divisor sera: %lld\n", mcd1);
	return mcd1;
	
}
}
if(opcion2 == 2){
	break;
}
}
 }
if(strncmp(opcion, aux4, 5)==0){
	clear();
	return 0;
}

	}
	return 0;
}