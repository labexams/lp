#include<stdio.h>

int main (int argc, char *argv[]){
  if (argc != 3) {
    printf("Incorrect Syntax\n", argc);
    exit(1);
  }
  FILE *src = fopen(argv[1], "r");
  FILE *dest = fopen(argv[2], "w");
  char ch = fgetc(src);
  do {
    fprintf(dest, "%c", ch);
    ch = fgetc(src);
  } while (ch != EOF);
  fclose(src);
  fclose(dest);
  return 0;
}
