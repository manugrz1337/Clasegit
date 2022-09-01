/*
 ============================================================================
 Name        : Ejercicio3_2.c
 Author      : Manuel Gerez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int validarParImpar(int numeroValidar);

int main(){

	setbuf(stdout,NULL);

    int numeroIngresado;
    int validacion;

    printf("ingrese un numero: ");
    scanf("%d", &numeroIngresado);
    validacion = validarParImpar(numeroIngresado);

    if(validacion == 1){
        printf("el numero es par");
    } else{
        printf("el numero es impar");
    }

}

int validarParImpar(int numeroValidar){

	setbuf(stdout,NULL);

    int retorno;

    if(numeroValidar %2 == 0){
        retorno = 1;
    } else {
        retorno = 0;
    }

    return retorno;

}
