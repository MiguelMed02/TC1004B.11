#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void handleSignal(int signal){
    printf("jaja no me matas %d\n", signal);
}

int main(){
    signal(2, handleSignal);
    signal(12, handleSignal);
    while(1){
        printf("trabajando \n");
        sleep(1);
    }
    return 0;
}