#include <stdio.h>
#include <unistd.h>

using namespace std;

int main() {
  int value1, value2;
  // what happend if double fork()
  //  we have 4 processes
  value1 = fork();
  value2 = fork();
  // print pid 
  printf("In main: value1 = %d\n value2 = %d\n pid = %d, parent_pid = %d\n", value1, value2, getpid(), getppid());
  return 0;
}
