#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void clear_screen() {
    system("clear");
}

int main() {
    srand(time(NULL));
    char barrier = '\x3D';
    int loop = 0, chip = 1000, random, value = 0, card2, player = 0, dealer, pilihan;
    int a = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, ten = 0, j = 0, q = 0, k= 0;
    int disabled0 = 0, disabled1 = 0, disabled2 = 0, disabled3 = 0;

    char card;

    while (chip > 0) {
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
        loop = 0;

        printf("\n\nKetik 1 Untuk Mulai! ");
        scanf("%d", &pilihan);
        clear_screen();
        // sampe sini aja yang selamat datang

        while (pilihan == 1) {
            // ini buat ngasih 2 kartu ke player ya
            if (player < 50) {
            random_again:
                player++;
                random = rand() % 1;
            } else {
                printf("%d", value);
                player++;
                return 0;
            }

            if (false) {
                sini:
                    printf("Udah Limit bang");
                    return 0;
            }

            // ini buat seting seting kartu pokonya mah sama valuenya
            if (random == 0) {
                a = rand() % 4;
                if (a == 0 && disabled0 == 0) {
                    printf("┌─────────┐\n│ A       │\n│         │\n│    ♠    │\n│         │\n│       A │\n└─────────┘\n");
                    disabled0++;
                } else if (a == 1 && disabled1 == 0) {
                    printf("┌─────────┐\n│ A       │\n│         │\n│    ♥    │\n│         │\n│       A │\n└─────────┘\n");
                    disabled1++;
                } else if (a == 2 && disabled2 == 0) {
                    printf("┌─────────┐\n│ A       │\n│         │\n│    ♦    │\n│         │\n│       A │\n└─────────┘\n");
                    disabled2++;
                } else if (a == 3 && disabled3 == 0) {
                    printf("┌─────────┐\n│ A       │\n│         │\n│    ♣    │\n│         │\n│       A │\n└─────────┘\n");
                    disabled3++;
                } else if (disabled0 == 1 && disabled1 == 1 && disabled2 == 1 && disabled3 == 0) {
                    goto sini;
                } else {
                    goto random_again;
                }
                value += 11;
                printf("\n\n(%d)\n", value);
            } else if (random > 0 && random < 10) {
                card2 = random;
                printf("KARTU ANDA ADALAH %d\n", card2 + 1);
                value += random + 1;
            } else if (random == 10) {
                card = 'J';
                printf("KARTU ANDA ADALAH %c\n", card);
                value += 10;
            } else if (random == 11) {
                card = 'Q';
                printf("KARTU ANDA ADALAH %c\n", card);
                value += 10;
            } else if (random == 12) {
                card = 'K';
                printf("KARTU ANDA ADALAH %c\n", card);
                value += 10;
            }
        }
        printf("Terima Kasih dan Selamat Jumpa Lagi!\n");
        return 0;
    }
    printf("\n\nChip Anda Kurang Silahkan Ulang Program Lagi\n");
    return 0;
}
