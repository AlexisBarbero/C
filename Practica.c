#include<stdio.h>
#include<math.h>
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
/* 
char * condicion(int nota);

int main (){
    int nota;

    //Pido la nota del alumno
    printf("Ingrese la nota del alumno: ");
    scanf("%d", &nota);
    
    // Condicion While para pedirle un numero valido
    while (nota < 0 || nota > 10)
    {
        printf("Ingrese un valor valido de nota entre el 0 y el 10: ");
        scanf("%d", &nota);
    }
    
    // Imprimo por pantalla la nota del alumno 
    printf("La condicion del alumno es: %s",condicion(nota));
    return 0;
}

char * condicion(int nota){

    if (nota < 6)
    {
        return "insuficiente";
    }
    else if (nota == 6)
    {
        return "aprobado";
    }
    else if (nota == 7)
    {
        return "bueno";
    }
    else if (nota == 8)
    {
        return "muy bueno";
    }
    else if (nota == 9)
    {
        return "distinguido";
    }
    else
    {
        return "sobresaliente";
    }
    
} */

/* 
Ejercicio 7. Un año es bisiesto si es divisible por 400, o bien si es divisible por 4 pero no por
100. Escriba un programa que lea por teclado un año y devuelva si es bisiesto o no.
 */
/* 
char * bisiesto(int ano);

int main() {
int ano;
printf("Ingrese un ano para saber si es bisiesto\n");
scanf("%d", &ano);

printf("el ano %d %s", ano, bisiesto(ano));
 
return 0;
}

char * bisiesto(int ano){

    if(((ano % 4) == 0) && ((ano % 100) != 0)){
        return "es bisiesto";
    }
    else{
        return "no es bisiesto";
    }
}
 */

/* Ejercicio 8. Simplifique el siguiente código de forma que sean necesarias menos comparaciones. */
/* 
if ( Edad > 64) printf (" Seguridad Social ") ;
if ( Edad < 18) printf (" Exento ") ;
if (( Edad >= 18) && ( Edad < 65) ) printf (" Imposible ") ;
 */

/* 
Ejercicio 15. Escriba una función maximo que tome como parámetros dos enteros y devuelva
el máximo entre ellos. Utilice esta función para calcular el máximo entre 4 enteros que se le
soliciten al usuario por teclado.
 */

int maximo(int num1, int num2);
/* 
int main (){
int resto,num1,num2,num3,num4;

printf("Ingrese cuatro numeros para saber cual es el mayor\n");
scanf("%d %d %d %d", &num1, &num2, &num3, &num4); 

printf("Su mayor numero es: %d", maximo(num1 ,maximo(num2 ,(maximo (num3 ,num4)))));
}
*/



/* 
Ejercicio 16. Tres números positivos pueden ser la medida de los lados de un triángulo si y
sólo si el mayor de ellos es menor que la suma de los otros dos. Escriba y pruebe una función
ladosTriangulo que devuelva 1 si los tres números que se le pasan verifican esta condición o
0 en caso contrario.
*/

/* 
int main (){
int lado1,lado2,lado3,condicion=0;
printf("Ingrese los lados del triangulo \n");
scanf("%d %d %d", &lado1,&lado2,&lado3);

if (maximo(lado1,maximo(lado2,lado3)) < (lado1+lado2+lado3)-maximo(lado1,maximo(lado2,lado3)))
{
    condicion = 1;
}

printf("La condicion es: %d", condicion);


}
*/

/* 
Ejercicio 17. Defina una función esRectangulo que tome tres enteros y devuelva 1 si los
números que se le pasan pueden ser los lados de un triángulo rectángulo, o 0 en caso contrario.
Sugerencia: una manera sería verificar si el cuadrado del mayor es igual la suma de los
cuadrados de los otros dos. Sin embargo, existe otra manera utilizando sólo una vez una función max3 que devuelve el máximo entre tres enteros dados. 
Defina ambas funciones y pruebe esRectangulo con las entradas (3, 5, 4), (5, 13, 12) y (7, 3, 5).
*/

/* 
int main(){

    int condicion=0,lado1,lado2,lado3,cualado1,cualado2,cualado3;
    printf("Ingrese los lados del triangulo\n");
    scanf("%d %d %d", &lado1,&lado2,&lado3);

    cualado1 = lado1 * lado1;
    cualado2 = lado2 * lado2;
    cualado3 = lado3 * lado3;
    

    if (maximo(cualado1,maximo(cualado2,cualado3)) == ((cualado1+cualado2+cualado3)-maximo(cualado1,maximo(cualado2,cualado3))))
    {
       condicion = 1;
    }
    
    printf("La condicion es: %d", condicion);

}


int maximo(int num1, int num2){

    if (num1<num2)
    {
        return num2;
    }else
    {
        return num1;
    }
} 
 */

/* Ejercicio 19. La sucesión de Fibonacci se define de la siguiente manera:


        0 si n = 0
f(n) =  1 si n = 1
        f(n − 1) + f(n − 2) si n > 2

Escriba una función recursiva f que tome un entero n y devuelva el correspondiente valor
según la sucesión de Fibonacci */
/* int f(int pos);

int main(){

    int pos;
    printf("Que posicion en la sucesion de Fibonacci quiere saber \n");
    scanf("%d", &pos);

    printf("El numero correspondiente es: %d", f(pos));
}


int f(int pos){

    if (pos == 0)
    {
        return 0;

    }else if(pos == 1)
    {
        return 1;
    }else
    {
        return f(pos - 1) + f(pos - 2);
    }
    
} */

/* Ejercicio 1. Escriba un programa que pida por teclado el resultado obtenido al lanzar un
dado de seis caras y muestre por pantalla el número en letras de la cara opuesta al resultado
obtenido. En caso que el valor ingresado no sea válido para las caras de un dado, se debe
mostrar el mensaje: "Número incorrecto".
 */
/* 
int main(){

    int dado;
    printf("Ingrese el valor del dado obtenido\n");
    scanf("%d", &dado);

    switch(dado)
    {
    case 1:
        printf("Su numero es cuatro");
        break;
    case 2:
        printf("Su numero es cinco");
        break;
    case 3:
        printf("Su numero es seis");
        break;
    case 4:
        printf("Su numero es uno");
        break;
    case 5:
        printf("Su numero es segundo");
        break;
    case 6:
        printf("Su numero es tercer");
        break;
    
    default:
        printf("Este es un numero incorrecto");
        break;
    }

}
 */

/* 
Ejercicio 2. En la siguiente tabla se muestra el número de camas de las habitaciones de una
casa de campo y la planta donde está ubicada cada una de ellas:
Se pide que escriba un programa que:
1. Muestre el listado de las habitaciones de la casa de campo.
2. Pida por teclado el número (dato entero) asociado a una habitación.
3. Muestre por pantalla la planta y el número de camas de la habitación seleccionada. 
*/

/* 
int main(){
    int habitacion;
    printf("Las habitaciones disponibles son:\n1.Azul \n2.Roja \n3.Verde \n4.Rosa \n5.Gris\nIngrese el numero de la habitacion que desee: ");
    scanf("%d",&habitacion);


     switch(habitacion)
    {
    case 1:
        printf("Planta: Primera\nCamas: 2\n");
        break;
    case 2:
        printf("Planta: Primera\nCamas: 1\n");
        break;
    case 3:
        printf("Planta: Segunda\nCamas: 3\n");
        break;
    case 4:
        printf("Planta: Segunda\nCamas: 2\n");
        break;
    case 5:
        printf("Planta: Tercera\nCamas: 1\n");
        break;

    default:
        printf("Este es un numero incorrecto\n");
        break;
    }
} */

/* Ejercicio 3. Calcule mediante bucles for las siguientes sumatorias. */

/* int main(){
    float i;
    for (i = 0; i < 100;printf("%f\n",1/i++));
} */

/* int main(){

    float i;
    for (i = 0; i < 30; printf("%f\n",(1/(i*i)))){
        i++;
    }
    
} */
/* int main(){

    int i;
    for (i = 0; i < 30; printf("%f\n",(1/pow(i,i)))){
        i++;
    }
    
} */

/* Ejercicio 4. Una terna de números naturales (a, b, c) es una terna pitagórica si a2 + b2 = c2.
Escriba un programa que imprima todas las ternas pitagóricas con a ≤ 20 y b ≤ 30.
 */
/* 
 int main(){

    int a,b,c;
    for(a=1;a<=20;a++){
        for(b=1;b<=30;b++){
            c = (a*a) + (b*b);
            printf("%d\n",c);
        }
    }
}  */
/* 
#define numeroganador 263

int main(){
    int intentos = 15,numero;
    while ((intentos != 0) && (numero != numeroganador)){
        printf("Adivina el numero!, entre el 0 y el 500\n");
        scanf("%d", &numero);
        if (numero > numeroganador)
        {
            printf("El numero es mas chico!\n");

        }else if (numero < numeroganador)
        {
            printf("El numero es mas grande!\n");
        }else{

            printf("\n");
        }
        
        printf("Te quedan %d intentos\n",intentos--);

        } 
    if(intentos == 0){
        printf("Te quedaste sin intentos\n");
    }else{
        printf("Encontraste el numero culon\n");
    }

} */

/* 
Ejercicio 9. Escriba un programa que llene un arreglo con los primeros 100 números enteros
a partir del 0 y los muestre en pantalla en orden ascendente.
 */
/* 
int main(){
    int arreglo[101],i;
    for(i=0;i<100;i++){
        arreglo[i]=i;
        printf("%d\n", arreglo[i]);
    }
}
*/

/* 
Ejercicio 10. Escriba un programa que llene un arreglo con los números pares que se encuentren entre 100 y 200 y los muestre en pantalla en orden descendente.
 */
/* 
int main(){

    int arreglo[51],i;
    for(i=0;i<51;i++){
        arreglo[i]=(i*2)+100;
    }
     for(i=50;i>-1;i--){
        printf("%d\n",arreglo[i]);
    }
    
}  */

/* 
Ejercicio 11. Escriba un programa que llene un arreglo con los primeros 50 múltiplos de 3 y
los muestre en pantalla en orden descendente.
 */
/* 
int main(){

    int arreglo[51],i;

    arreglo[0]=1;

    for(i=1;i<51;i++){
        arreglo[i]=i*3;
    }
    for(i=50;i>0;i--){
        printf("%d\n", arreglo[i]);
    }
}  */

/* 
Ejercicio 12. Escriba un programa que lea un arreglo a de 10 enteros y un entero n e imprima
el índice del arreglo a donde se encuentra n si n está presente en el arreglo, o -1 en caso
contrario.
 */


/* int main(){

    int i,a[]={0,1,2,4,4,5,6,4,8,9},n=4;
    for(i=0;i<10;i++){

        if(a[i]==n){
            printf("%d\n",i);
        }else{
            printf("-1\n");
        }
    }
} */

/* 
Ejercicio 13. Escriba un programa que lea un entero n entre 5 y 100 y luego solicite al usuario
el ingreso de n enteros, los cuales debe guardar en un arreglo. Finalmente, debe determinar si
la suma de los elementos del arreglo es mayor a 30. Si el usuario ingresa un número n menor
a 5 o mayor a 100 entonces se deberá imprimir un mensaje de Error y el ingreso del arreglo y
el análisis de su contenido no se realizará.
 */
/* 
int main(){

    int i=0,n=0,enteros,suma=0;
    while(n<5 || n>100){
        printf("Ingrese el numero de enteros a trabajar, mayor a 5 y menor a 100\n");
        scanf("%d", &n);

        if(n<5 || n>100){
            printf("Error\n");
        }
    }

    int arreglo[n];
    printf("Ingrese %d enteros\n",n);
    for(i=0;i<n;i++){
        
        scanf("%d\n", &enteros);
        suma += enteros;
        arreglo[i]=enteros;
        
    }
    if (suma>30)
    {
        printf("La suma de los enteros es mayor a 30, la suma es: %d\n", suma);
    }else{
        printf("La suma de los enteros no es mayor a 30, la suma es: %d\n", suma);
    }
} */

/* Ejercicio 14. Escriba un programa que lea enteros hasta que se ingrese un número negativo
y posteriormente imprima qué valor entre 0 y 99 se ingresó más veces
*/
/* 
int main(){

    int i,arreglo[100], numeros=0, mayor=0,posicion=0;
    printf("Ingrese enteros de 0 a 99 y cuando quiera terminar ingrese un numero negativo\n");
    for(i=0;i<100;i++){
        arreglo[i]=0;
    }
    while(numeros>=0){
        scanf("%d", &numeros);
        arreglo[numeros] += 1;
    }
    printf("\n");
    for(i=0;i<100;i++){
        if(arreglo[i]>mayor){
            mayor=arreglo[i];
            posicion = i;
        }
    }
    printf("Este es el mayor boludin:%d y aparecio %d veces", posicion, mayor);
} */
/* 
int main(){

    int i,arreglo[]={1,2,3,4,5,6,7,8},tamano=8,suma=0;
    for(i=0;i<tamano;i++){
        suma += arreglo[i];
    }
    printf("La suma del arreglo es: %d\n",suma);
} */

/* Ejercicio 16. Escriba una función prodAlt que tome un arreglo de enteros junto con la longitud del mismo y devuelva el producto de los elementos cuyos índices son pares. */
/* int main(){

    int i,arreglo[]={1,2,3,4,5,6,7,8},tamano=8,prod=1;
    for(i=0;i<tamano;i++){
        if((i%2)==0){
            prod *= arreglo[i];
            }   
            }
    printf("La multiplicacion del arreglo es: %d\n",prod);
}  */


//Practica 3 goood


#include<stdio.h>
#include<math.h>
/*
// Recibe un punto y devuelve la proyecci ó n sobre el eje
// que se pida ( ’ x ’ o ’y ’) . Cualquier otro valor debe ser
// invalidado
typedef struct{
    double x ;
    double y ;
}punto;


double proy(punto p , char eje );



int main(){

 punto* p;
 double aux = p->x;
 p->x = 3.4;
 p->y = 5.3;
 printf("%ld \n",p->x);
 return 0;
}

double proy(punto p, char eje){

}/*  */
/* struct punto {
    double x ;
    double y ;
};

// Recibe un punto y devuelve la proyecci ó n sobre el eje
// que se pida ( ’ x ’ o ’y ’) . Cualquier otro valor debe ser
// invalidado
double proy ( struct punto p , char eje );
// Devuelve la distancia entre los puntos recibidos
double dist ( struct punto punto1 , struct punto punto2 );
// Devuelve ’1 ’ , ’2 ’ , ’3 ’ o ’4 ’ si el punto se encuentra
// estrictamente en un cuadrante , ’x ’ o ’y ’ si se encuentra
// en uno de los ejes u ’o ’ si es el origen de coordenadas
char pos (struct punto p); 

int main(){

    struct punto p1;
    struct punto p2;
    char eje;
    
    printf("ingrese las cordenadas de un punto x e y: \n");
    scanf("%lf %lf", &(p1.x), &(p1.y));
    //printf("ingrese el eje a analizar x o y: \n");

    for(char i = getchar(); i!= EOF && i!= '\n'; i = getchar());
    printf("ingrese las segundas cordenadas de un punto x e y: \n");
    scanf("%lf %lf", &(p2.x), &(p2.y));

    //scanf("%c", &eje);
    //printf("la proyeccion al eje es: %f\n", proy(p1,eje));
    printf("La distancia es %lf y el primer punto esta en el cuadrante %c, y el segundo en el cuadrante %c\n", dist(p1,p2), pos(p1),pos(p2));

    return 0;
}

double proy (struct punto p, char eje){

    if (eje == 'x')
    {
        return p.x;
    }else{
        return p.y;
    }
}

double dist ( struct punto punto1 , struct punto punto2 ) {
    double distancia;

    distancia = sqrt(pow(fabs(punto1.x - punto2.x),2)+pow(fabs(punto1.y - punto2.y),2));
    return distancia;

}   

char pos (struct punto p){

    if (p.x > 0 && p.y > 0)
    {
        return '1';
    }else if (p.x < 0 && p.y > 0)
    {
        return '2';
    }else if (p.x < 0 && p.y < 0)
    {
        return '3';
    }else if (p.x > 0 && p.y < 0)
    {
        return '4';
    }else
    {
        return 'n';
    }
    }
  */   
    
    
//Ejercicio 2. Dadas las siguientes declaraciones:
/* 
int main(){
    int vector [5] = {10 , 20 , 30 , 40 , 50};
    int a = 3;
    int *ptr = &a ;
    int *qtr = vector ;

    printf("a es 3 = %d\n",a);
    printf("a es direccion de memoria = %p\n",&a);
    printf("a es error = *a\n");
    printf("a es direccion de memoria = %p\n",ptr);
    printf("a es direccion de memoria = %p\n",&ptr);
    printf("a es el valor = %d\n",*ptr);
    printf("a es direccion de memoria = %p\n",qtr);
    printf("este es la direccion de qtr = %p\n",&qtr);
    printf("a es un valor = %d\n",*qtr);
    printf("el vector es un valor = %ls\n",vector);
    printf("a es direccion de memoria = %p\n",&vector);
    printf("a es direccion de memoria = %d\n",*vector);
    printf("a es direccion de memoria = %p\n",++qtr);
    printf("a es direccion de memoria = %d\n",++*qtr);
    printf("a es direccion de memoria = %d\n",++*vector);
    printf("a es direccion de memoria = %p\n",*&ptr); 

} */
/* 
//Ejercicio 3. Dadas las siguientes declaraciones:
int main(){
    int *ip1, ip2 = 5;
    char ch, *cp;

     ip1="me pica el troncho";
    printf("laura? %d",ip1); 
    cp = 0;
    printf("laura? %s",cp);  
    ip1 = 0;
    printf("laura? %d\n",ip1);   
     ip1 = ip2;
    printf("laura? %d\n",ip1);  
     cp = '\0';
    printf("laura? %p\n",cp); 
     ip1 = '\0';
    printf("laura? %p\n",ip1); 
     cp = &ch;  
    printf("laura? %p\n",cp);  
    *ip1 = ip2;
    printf("laura? %d\n",*ip1);
} */

//Ejercicio 4. Cada uno de los siguientes fragmentos de programas tienen, al menos, un error
//y/o alguna construcción no recomendable. Identifíquelos y de alternativas para su re-escritura.

/* int a , b ;
void initialize () {
if (a >0) b =1; else b =0;
}
int main () {
a =1;
initialize();
printf ("%d %d\n", a , b ) ;
return 0;
} 

// el programa anda, pero es engorrosa su lectura, ademas en vez de usar variables globales, usariamos puntaros 
*/
/*     #include<stdlib.h>
    int main () {
    int * pi = malloc ( sizeof ( int ) ) ;
    int * pj ;
    * pi = 11;
    pj = pi ;
    printf ("*pi= %d, *pj= %d", * pi , * pj ) ;
    free ( pj ) ;
// resto de código
    return 0;
} */

/* int main () {
    int a =34;
    int * ptr = &a;
    int b =45;
    int * ptr2 = &b; 
    printf (" %d =?= %d", a , * ptr ) ;
    return 0;
} */