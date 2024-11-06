#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const int MIN = -50;
    const int MAX = 50;
    const int numValori = 10;
    int n;
    int NMAX = -50;
    int NMIN = 50;
    float media = 0;
    srand(time(NULL));


    for (int i = 0; i < numValori; i++) {
        n = rand() % (MAX - MIN + 1) + MIN;

        printf("%d\n",n);

        if (n > NMAX) {
            NMAX = n;
        } else if (n < NMIN) {
            NMIN = n;
        }

        media += n;

    }

    printf("il numero massimo e' %d\n", NMAX);
    printf("il numero minimo e' %d\n", NMIN);
    printf("la media e' %.2f\n", media / numValori);

    return 0;
}
