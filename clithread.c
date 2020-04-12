/**
 Este es un programa de prueba para ver el uso de la plataforma Classroom de 
 Github.
 Cada vez que aparezca un bloque de comentarios y que termine con la cadena:
   'YOUR CODE - N'
 quiere decir que usted debe incluir su codigo y que requiere 'N' lineas para
 completar la tarea que se requiere.
 
*/
#include <pthread.h>
#include <stdio.h>

void* imprimir(void* str) {
  /**
    Defina una variable 'cadena' y que reciba el valor de 'str'
    YOUR CODE >= 1
  */
  printf("%s\n",cadena);
  /**
    Invoque la funcion 'pthread_exit();'
    YOUR CODE = 1
  */
}

int main(int argc, char** argv) {
  int i;
  /**
     Defina un apuntador a identificadores de hilos de ejecucion llamado
     'v_pid_t'.
     YOUR CODE = 1
  */
  
  /**
     Determine el numero de argumentos que se le pasaron al programa.
     Recuerde que 'argc' contiene el numero de argumentos que se le pasaron al
     programa. 'argc' es igual a '1' cuando no se pasan argumentos.
     Al apuntador 'v_pid_t' asignele memoria de manera que pueda almacenar 
     hasta 'argc' identificadores de hilos de ejecucion.
     YOUR CODE >= 2
  */
  for (i = 0; i < argc; i++) {
    pthread_create(&v_pid_t[i], NULL, imprimir, (void*) argv[i]);
  }
  pthread_exit();
}
