#include <stdio.h>
#include <unistd.h>/* por getpid() */
#define N (2000)
int main(void) {
  FILE * f ;
  int i, value;
  for (i=0; i<N; i++) {
    f = fopen("seqno.txt","r+");
    fscanf(f,"%d", &value);
    value++;
    rewind(f);
    fprintf(f,"%6d\n", value);
    fflush(f);
    printf("Process id: %d, value: %d\n", getpid(), value);
    fflush(stdout);
    fclose(f);
    //sleep(2);
  }
}
