#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  int pid = fork();
  if (pid == 0) {
    printf("Child process %d\n", getpid());
    exit(0);
  } else {
    wait(0);
    sleep(10);
    printf("Parent process\n");
  }
  return 0;
}
