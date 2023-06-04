#include <stdio.h>

void decay(int n){
    if(n>0){
        printf("Decay: %d\n", n);
        decay(n-1);
    }else{
        printf("Decay finished.\n");
    }
}

void debug(int n) {
    printf("Debugging...\n");
    //fill n back to the imput value
    debug(n+1);
    //print n
    printf("n= ", n);

    printf("Debugging complete.\n");
}
int main(int argc, char *argv[]) {
    printf("Program Started.\n");
    decay(5);
    printf("Decay process complete.\n");
    debug();
    printf("Program Finished.\n");
    return 0;
    }