#include <stdio.h>
#include <stdlib.h>
#include <math.h>





int dig1, dig2, dig3, dig4, numfinal;


int main(){
	
 //entrada de numeros
 printf("entre com um numero de 3 algarismos\n");
 printf("entre com o primeiro digito\n");
 scanf("%i", &dig1);
 
 printf("entre com o segundo digito\n");
 scanf("%i", &dig2);
 
 printf("entre com o terceiro digito\n");
 scanf("%i", &dig3);
 
 
 //calculo 
 dig4 = (dig1 + (dig2*3)+(dig3*5)) % 7;
 
 
 //exibe resultado
 printf("o numero final de 4 digitos e %i%i%i%i", dig1,dig2,dig3,dig4);
 
 
 
 
}
