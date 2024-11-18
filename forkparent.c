#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
  const int n = 10;
  double x = 0, j;

  for (int i = 0; i < n; i++) {
    const int pid = fork();
    if (pid == 0) {
      printf(1, "Child process: PID = %d\n", getpid());
      for (j = 0; j < 80000000.0; j++)
      {
        x = x + 3.14 * 89.64; // useless calculation to consume CPU time
      }
      break;
    } else if (pid > 0) {
      printf(1, "Parent %d creating child %d\n", getpid(), pid);
      wait();
    } else {
      printf(1, "Fork failed\n");
    }
  }

/*   for (int i = 0; i < n; i++) {
    wait();
  }
 */
  exit();
}