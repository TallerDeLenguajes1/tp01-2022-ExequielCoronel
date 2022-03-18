#include <stdio.h>
#include <stdlib.h>
#define MAX 100

//FUNCIONES declaración
int cuadradoNumero(int numero); //devuelve el cuadrado de un numero ingresado en su argumento
void cuadradoNumeroPunteros(int *numero); //modifica el valor de la variable a la cual apunta el puntero ingresado en el argumento de la funcion por el cuadrado de dicho valor
void mostrarDatosVariable(char *cadena); //muestra la dirección de memoria del primer caracter de la cadena de caracteres y el contenido de la misma
void Invertir(int *pa, int *pb); //guarda en el valor de a en la variable b, y en el valor de b el valor de a
void orden(int *pa, int *pb); //compara dos valores y guarda en el valor del primer argumento el valor más chico, y en el valor del segundo argumento el valor más grande
void paresEntreValores(int *pa, int *pb); //Muestra los pares entre los valores ingresados
//-----------------------------------------------------------------------------------------------------------------------------------------------
int main () {
    int numero=7, numero2=4;
    char cadena[MAX]="Hola Mundo";
    cuadradoNumeroPunteros(&numero);
    printf("%d\n",numero);
    printf("%d\n",cuadradoNumero(4));
    mostrarDatosVariable(cadena);
    Invertir(&numero, &numero2);
    printf("%d, %d\n", numero, numero2);
    orden(&numero, &numero2);
    printf("%d, %d\n", numero, numero2);
    paresEntreValores(&numero, &numero2);
    return 0;
}

//FUNCIONES definición
int cuadradoNumero(int numero){
    return (numero*numero);
}

void cuadradoNumeroPunteros(int *numero){
    *numero = *numero*(*numero);
}

void mostrarDatosVariable(char *cadena){
    printf("contenido de la cadena: %s\n", cadena);
    printf("direcci%cn de memoria del primer caracter de la cadena: %p\n",162, &cadena);
}

void Invertir(int *pa, int *pb){
    int aux;
    aux = *pa;
    *pa = *pb;
    *pb = aux;
}

void orden(int *pa, int *pb) {
    if(*pa>*pb){
        Invertir(&pa,&pb);
    }
}

void paresEntreValores(int *pa, int *pb){
    orden(&pa,&pb);
    while(*pa <= *pb){
        if(*pa%2==0){
            printf("%d\n",*pa);
        }
        *pa+=1;
    }
}
//------------------------------------------------------------------------------------------------------------------------------------------------

