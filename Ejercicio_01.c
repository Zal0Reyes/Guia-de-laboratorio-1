/*
     CREO Q ESTA TODO TERMINADO POR SI LO QUIERES REVISAR
     FALTARIAN LOS CASOS DE PRUEBA, PERO ESO LO HAGO OTRO DIA,.

     SI PUEDES INTENTA BUSCAR ERRORES USANDO CASOS DE PRUBEA,GRACIAS.

*/

#include <stdio.h>

float promedio_ponderado(int numero_materias, float notas[], int creditos[]);
char situacion_academica(float promedio, int materias_reprobadas);
int cantidad_materias_reprobadas(int numero_materias, float notas[]);
int validar_datos_nota(float numero);
int validar_datos_credito(int numero);
int menu(int numero_semestre);
void mostrar_historial(int asignatura[],float notas[][8], int creditos[][8],int cantidad_semestres);
float recursiva_promedio_historico(int cantidad_promedios,float promedios[],int i,float suma);
              
int main(){
    float notas[10][8],nota;
    int creditos[10][8],asignatura[10],credito;
    int opcion=0,cantidad_asignatura,semestres_ingresados=0;

    for (int j=0; j<10; j++){//para pedir un maximo de 10 semestres
        if (opcion==99){//Si es igual a 99, significa que el usuairo quiere salir del programa
            break;
        }
        opcion = menu(j+1); //Muestro el menu en la terminal y pido un dato.
        switch (opcion){
            case 1:
                do{
                printf("Cantidad de asignaturas en el semestre (3-8): ");//pido la cantidad de asignaturas en el semestre
                scanf("%d",&cantidad_asignatura);
                }while(cantidad_asignatura>8 || cantidad_asignatura<3);//valido que este dentro del rango
                
                asignatura[j]=cantidad_asignatura;//agrego cada cantidad de asiganturas a un arreglo para calcular el promedio en una funcion mas adelante.
                int i=0;//inicio i en 0 para que se pueda cumplir el while despues de cada semestre.
                while(i<cantidad_asignatura){
                    do{
                        printf("Ingrese calificacion %d: ",i+1);//pido la nota de la primera asignatura
                        scanf("%f",&nota);

                        printf("Ingrese el credito de asignatura %d: ",i+1);//pído el credito de la asignatura
                        scanf("%d",&credito);
                        printf("========== O ==========\n");
                    }while(validar_datos_nota(nota) || validar_datos_credito(credito));// si ambos son FALSE seguira el codigo normalmente, si alguno es TRUE (dato invalido), volvera a pedir datos.

                    creditos[j][i]=credito;//agrego el credito a un arreglo.
                    notas[j][i]=nota;//agrego la nota a un arreglo.
                    i++;
                }
                semestres_ingresados++;//incremento la cantidad de semestres, ya que terminamos el while
                break;

            case 2:
                if (semestres_ingresados==0){//por si se elige esta opcion si antes haber ingresado las notas en el case 1.
                    printf("No existen Historial\n");
                }
                else{
                    mostrar_historial(asignatura,notas,creditos,semestres_ingresados);//llamo a la funciuon para mostrar todo
                }
                break;
            case 3:
                opcion=99;//Para sacarlo terminar todo.
                break;
        }
    }
}

void mostrar_historial(int asignatura[],float notas[][8], int creditos[][8],int cantidad_semestres){
    char clasificacion;
    int cantidad_reprobadas,cantidad_semestres_criticos=0,reprobado=0;
    float promedio, total_promedios[10];
    
    for(int i=0; i<cantidad_semestres;i++){//inicio un for para recorrer los arreglos
        
        cantidad_reprobadas= cantidad_materias_reprobadas(asignatura[i], notas[i]);//asigno valor de la cantidad de materias reprovadas llamando a un funcion q lo calcula
        promedio= promedio_ponderado(asignatura[i],notas[i],creditos[i]);//asigno valor al promedio con una funcion
        clasificacion= situacion_academica(promedio,cantidad_reprobadas);//asigno la clasificacion
        
        total_promedios[i]=promedio;//en cada iteracion, guardo los promedios, para luego utilizarlos en otras funciones

        //muestro los resultados del semestre
        printf("========== O ==========\n");
        printf("Semestre %d\n",i+1);
        printf("Promedio ponderado = %f\n",promedio);
        switch (clasificacion){
            case 'R':
                printf("Situacion Academica: REGULAR\n");
                cantidad_semestres_criticos=0;break;
            case 'A':
                printf("Situacion Academica: ALERTA\n");
                cantidad_semestres_criticos=0;break;
            case 'C':
                printf("Situacion Academica: CRITICA\n");
                cantidad_semestres_criticos++;
                if (cantidad_semestres_criticos>=2){
                    reprobado=1;
                }
                break;
        }
    }
    //muestro los datos generales de todos los semestres
    printf("========== O ==========\n");
    printf("Promedio Total de semestres: %.2f\n",recursiva_promedio_historico(cantidad_semestres,total_promedios,0,0));
    if (reprobado==1){
        printf("ESTAS ELIMINADO DE LA ACADEMIA\n");
    }

}

float recursiva_promedio_historico(int cantidad_promedios,float promedios[],int i,float suma){
    suma+=promedios[i];//sumo el primero promedio
    if (i<cantidad_promedios-1){
        return recursiva_promedio_historico(cantidad_promedios,promedios,i+1,suma);//luego llamo a la funcion con i+1, haciendo que recorra el arreglo al siguiente.
    }
    else{
        return suma/cantidad_promedios;//cuando no se cumpla la condicion de dividira todo los sumado por la cantidad de promedios para retornarlo.
    }  
}
int validar_datos_nota(float numero){
    if (numero>7 || numero<1){//si la nota es invalida retornara 1 (TRUE) para que el do-while se repita y pida datos nuevamente.
        printf("Nota Invalida\n");
        return 1;
    }
    else{
        return 0;//Retorna 0 (FALSE) por lo que no se repetira el do-while. 
    }
}
int validar_datos_credito(int numero){//si el credito es invalido retornara 1 (TRUE) para que el do-while se repita y pida datos nuevamente.
    if (numero>6 || numero<2){
        printf("Credito Invalido\n");
        return 1;
    }
    else{
        return 0; //Retorna 0 (FALSE) por lo que no se repetira el do-while
    }
}
int menu(int numero_semestre){
    int opcion;
    //muestro las opciones a escoger
    printf("===== SISTEMA DE CALIFICAIONES =====\n");
    printf("1) Ingresar Calificaciones De Semestre %d\n",numero_semestre);
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
