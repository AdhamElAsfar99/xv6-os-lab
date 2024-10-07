#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    int n = 10;
    int pid;
    
    for (int i = 0; i < n; i++) {
        pid = fork();
        if (pid == 0) { 
            printf(1, "Child process: PID = %d \n", getpid(),getcpu());
            exit();
        } else if (pid > 0) {
        } else {
            printf(1, "Fork failed\n");
        }
    }

    for (int i = 0; i < n; i++) {
        wait();
    }

    exit();
}
