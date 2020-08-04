//  actividad en clase #2
//  factores primos
//  alumno=nicolas Alfredo Jimenez



#include <stdio.h>


int valor=40;          //El numero que examinaremos.
int factores[1000];     //Arreglo para almacenar factores de "numero".
int i_factores=0;       //Indice para recorrer el arreglo "factores[]".


int main(){
    
int i=2;             //Empezaremos a verificar todos los factores desde 2.
                     //Pues el numero 1 es factor de todos los numeros.
  while(i<=valor)
  {
    if((valor%i)==0)  //a%b=0, implica que b es factor de a.
    {
    factores[i_factores]=i;  //Añadimos el factor al arreglo.
    numero=numero/i;         //Procesamos la variable "numero".
    i_factores++;            //Incrementamos indice de arreglo para el siguiente numero.
    continue;
    }     
  i++;  //Incrementamos indice.
  }

/* Rutina para imprimir */
i=0;   
printf("1 "); 
  while(i<i_factores)
  {
  printf(" %d ", factores[i]);
  i++;
  }
       
return 0;
}