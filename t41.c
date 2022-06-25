#include <stdio.h>
#include <stdlib.h>
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

 int main(int argc, char const *argv[])
{
	
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
	resultado = operacion(op,v1,v2);
	printf("%lf\n", resultado);
	return 0;
}


