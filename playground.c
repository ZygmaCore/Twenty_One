#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));
    int r = rand() % 13;
    printf("%d\n", r);
    return 0;
}