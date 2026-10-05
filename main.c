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
    int loop = 0, chip = 1, random, value, card2;
    char card;

    while (chip > 0) {

        // acak acak kartu player
        random = rand() % 13;

        if (random == 0) {
            card = 'A';
            printf("KARTU ANDA ADALAH %c\n", card);
            value = 11;
        } else if (random > 0 && random < 10) {
            card2 = random;
            printf("KARTU ANDA ADALAH %d\n", card2+1);
            value = random+1;
        } else if (random == 10) {
            card = 'J';
            printf("KARTU ANDA ADALAH %c\n", card);
            value = 10;
        } else if (random == 11) {
            card = 'Q';
            printf("KARTU ANDA ADALAH %c\n", card);
            value = 10;
        } else if (random == 12) {
            card = 'K';
            printf("KARTU ANDA ADALAH %c\n", card);
            value = 10;
        }

        printf("%c\n", card);
        printf("%d\n", card2);
        printf("%d\n", value);

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
