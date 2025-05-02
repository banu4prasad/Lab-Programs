#include <stdio.h>     // For printf and fprintf
#include <unistd.h>    // For fork and execl
#include <sys/wait.h>
int main() {
    int pid;
    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        execlp("/bin/ls", "ls", NULL);
    } else {
        wait(NULL);
        printf("Child complete\n");
    }
    return 0;
}