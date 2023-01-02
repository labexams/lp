#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
  int pfds[2];
  char buf[38];
  if (pipe(pfds) == -1) {
    perror("pipe");
    exit(1);
  }
  printf("Writing to file descriptor #%d\n", pfds[1]);
  write(pfds[1], "This is for testing pipe communication", 38);
  printf("Reading from file descriptor #%d\n", pfds[0]);
  read(pfds[0], buf, 38);
  printf("Read: %s\n", buf);
}
