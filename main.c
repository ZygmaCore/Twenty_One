#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void clear_screen() {
    system("clear");
}

int main() {
    srand(time(NULL));
    char pilihan = 'Y', barrier = '\x3D';
    int loop = 0, chip = 1, card;

    while (chip > 0) {

        // acak acak kartu
        card = rand() % 13;
        printf("%d\n", card);


        // SELAMAT DATANG
        while (loop <= 50) {
            printf("%c", barrier);
            loop++;
        }

        printf("\nSelamat Datang!\n");
        loop = 0;

        while (loop <= 50) {
            printf("%c", barrier);
            loop++;
        }

        printf("\n\nKetik 1 Untuk Mulai! ");
        scanf("%c", &pilihan);
        clear_screen();

        chip = 1;
    }
    printf("\n\nChip Anda Kurang Silahkan Ulang Program Lagi");
    return 0;
}
