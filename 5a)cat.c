#include<stdio.h>
int main (int argc, char *argv[]){
  if (argc != 2) {
    printf("Incorrect Syntax\n", argc);
    exit(1);
  }
  FILE *f = fopen(argv[1], "r");
  char ch = fgetc(f);
  do {
    printf("%c",ch);
    ch = fgetc(f);
  } while (ch != EOF);
  fclose(f);
  return 0;
}
