#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define N (2000)

int main(void) {
  FILE * f ;
  int i, value;
  int fd; // <-- El descriptor de archivo

  for (i=0; i<N; i++) {
    f = fopen("seqno.txt","r+");
    if (f == NULL) {
        perror("Error abriendo el archivo");
        exit(1);
    }
    
    // Obtenemos el descriptor de archivo (int) desde el FILE*
    fd = fileno(f); // <--

    // --- INICIO DE LA SECCIÓN CRÍTICA ---
    // Pedimos el candado. El proceso se bloqueará aquí si otro
    // proceso ya lo tiene.
    lockf(fd, F_LOCK, 0); // <--

    fscanf(f,"%d", &value);
    value++;
    rewind(f);
    fprintf(f,"%6d\n", value);
    
    // MUY IMPORTANTE: Forzar la escritura al disco ANTES de 
    // liberar el candado.
    fflush(f); 
    
    // --- FIN DE LA SECCIÓN CRÍTICA ---
    // Liberamos el candado para que otro proceso pueda entrar.
    lockf(fd, F_ULOCK, 0); // <--

    printf("Process id: %d, value: %d\n", getpid(), value);
    fflush(stdout);
    fclose(f);
  }
}
