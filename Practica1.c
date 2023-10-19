#include<stdio.h>

/* 
int main () {
 int a , b , c , d =6 , e ;
 a = 3;
 b = a - d / 3;
 a *= b ;
 c = a + d / a - 3 / a * b ;
 e = c + 8 / 4 - b ;
 e +=5;
 printf ("Los resultados son %d y %d ", c , e ) ;
 return 0;
 }
*/

/*
 int main () {
 float x , y ;
 printf (" Introduzca 2 nú meros :\n") ;
 scanf (" %f %f", &x , & y ) ;
 printf ("La suma de %f y %f vale %f\n", x , y , x + y ) ;
 printf ("La suma de %4f y %4.2f vale %10.3f\n", x , y , x + y ) ;
 printf ("La suma de %e y %e vale %e\n", x , y , x + y ) ;
 return 0;
}
 */

/*
    Ejercicio 4. Escriba una función que determine en qué estado está el agua en función de su
    temperatura: si es negativa o 0 el estado será sólido, si positiva y menor que 100 será líquido y
    si es mayor que 100 será gaseoso. El valor de la temperatura deberá ingresarse por pantalla. 
*/
/* 
char * EstadoAgua(int temperatura);


int main(){
    int temperatura; 
    printf("Ingrese la temperatura del agua \n");
    scanf("%d", &temperatura);

    printf("El estado de agua es : %s\n", EstadoAgua(temperatura));    

    return 0;
}

char * EstadoAgua(int temperatura){
    if(temperatura > 99)
    {
        return "gaseoso";
    };
    if(temperatura < 0)
    {
        return "solido";
    };
    if(temperatura > 0 && temperatura < 100)
    {
        return "liquida";
    };

}
*/

/* 
Ejercicio 5. Escriba una función que lea la nota de un alumno (entera) y muestre un mensaje
diciendo si sacó insifuciente (2 a 5), aprobado (6), bueno (7), muy bueno (8), distinguido (9)
o sobresaliente (10). Se debe mostrar un mensaje de error si la nota ingresada no es válida.
Este programa debe hacerse de dos maneras diferentes: con if secuenciales y con if-else
anidados.
 */


