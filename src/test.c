#include<stdio.h>
#include<unistd.h>

int main(int argc, char* argv[]) {
    int iter = 0;
    while (iter < 20) {
        printf("Hello world\n");
        sleep(1);
        iter++;
    }

    return 0;
}