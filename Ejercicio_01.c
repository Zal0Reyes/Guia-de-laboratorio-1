
/* 
NO terminado Aun
NO terminado Aun
NO terminado Aun
NO terminado Aun
NO terminado Aun
NO terminado Aun

Solo me dedique a realizar algunas funciones por si las quieres revisar. El main esta vacio de momento, hay si quieres hacer algun cambio dale nomas 
*/

#include <stdio.h>

float promedio_ponderado(int numero_materias, float notas[], int creditos[]);
char situacion_academica(float promedio, int materias_reprobadas);
int cantidad_materias_reprobadas(int numero_materias, float notas[]);
int menu();

int main(){
    int opcion = menu(); //Muestro el menu en la terminal y pido un dato.
}

int menu(){
    int opcion;
    //muestro las opciones a escoger
    printf("=====SISTEMA DE CALIFICAIONES=====\n");
    printf("1) Ingresar Calificaciones De Semestre\n");
    printf("2) Historial\n");
    printf("3) salir\n");
    do{
        printf("Ingrese opcion(1-3): ");//pido un dato.
        scanf("%d",&opcion);
    }while (opcion < 1 || opcion > 3);//si el dato esta fuera del rango lo volvera a pedir.
    return opcion;//Retorno la opcion escogida.
}

float promedio_ponderado(int numero_materias, float notas[], int creditos[]){
    
    float suma = 0; //Iniciamos la suma en 0.
    int total_creditos = 0;//Inciamos el total de cretidos en 0.
    
    for (int i = 0; i < numero_materias ; i++){ //Recorreremos los 2 arreglos para ir multiplicando nota por nota con su credito devido.
        suma += creditos[i] * notas[i];
        total_creditos += creditos[i]; //Sumamos los creditos para despues dividirlos por la suma total.
    }
    if (total_creditos == 0){ //si la cantidad de creditos es 0, retornaremos un FALSE por que no podemos dividir el total por 0 (Daria un error).
        return 0;
    }
    
    else{
        return suma/total_creditos; //Retornamos la suma total divida en el total de creditos.
    }
}

int cantidad_materias_reprobadas(int numero_materias, float notas[]){
    
    int contador_materias_reprobadas = 0;//iniciamos un contador en 0.
    
    for (int i = 0; i < numero_materias; i++){ //recorreremos el arreglo para ir viendo si alguna nota es menor a 4.
        if (notas[i] < 4){
            contador_materias_reprobadas++; //si una nota es menor a 4, se cuenta y luego se retornara el total.
        }
    }
    return contador_materias_reprobadas; 
}

char situacion_academica(float promedio, int materias_reprobadas){
    
    //Clasificacion de notas.
    if (promedio >= 5.5){
        return 'R'; //Situacion REGULAR.
    }
    else if (promedio >= 4 && promedio <= 5.4 && materias_reprobadas <=2 ){
        return 'A'; //Situacion ALERTA.
    }
    else{
        return 'C'; //Situacion CRITICA.
    }
}
