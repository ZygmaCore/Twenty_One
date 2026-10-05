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
    short disabled0 = 0, disabled1 = 0, disabled2 = 0, disabled3 = 0;
    short disabled4 = 0, disabled5 = 0, disabled6 = 0, disabled7 = 0;
    short disabled8 = 0, disabled9 = 0, disabled10 = 0, disabled11 = 0;
    short disabled12 = 0, disabled13 = 0, disabled14 = 0, disabled15 = 0;
    short disabled16 = 0, disabled17 = 0, disabled18 = 0, disabled19 = 0;
    short disabled20 = 0, disabled21 = 0, disabled22 = 0, disabled23 = 0;
    short disabled24 = 0, disabled25 = 0, disabled26 = 0, disabled27 = 0;
    short disabled28 = 0, disabled29 = 0, disabled30 = 0, disabled31 = 0;
    short disabled32 = 0, disabled33 = 0, disabled34 = 0, disabled35 = 0;
    short disabled36 = 0, disabled37 = 0, disabled38 = 0, disabled39 = 0;

    int i = 0;

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
            if (player < 100) {
            random_again:
                player++;
                random = rand() % 2;
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
                } else {
                    goto random_again;
                }
                value += 11;
                printf("\n\n(%d)\n", value);
            } else if (random > 0 && random < 10) {
                if (random == 1) {
                    two = rand() % 4;
                    if (two == 0 && disabled4 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♠    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled4++;
                    } else if (two == 1 && disabled5 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♥    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled5++;
                    } else if (two == 2 && disabled6 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♦    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled6++;
                    } else if (two == 3 && disabled7 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♣    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled7++;
                    } else {
                        goto random_again;
                    }
                    value += 2;
                }
                if (random == 1) {
                    two = rand() % 4;
                    if (two == 0 && disabled4 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♠    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled4++;
                    } else if (two == 1 && disabled5 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♥    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled5++;
                    } else if (two == 2 && disabled6 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♦    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled6++;
                    } else if (two == 3 && disabled7 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♣    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled7++;
                    } else {
                        goto random_again;
                    }
                    value += 3;
                }
                if (random == 1) {
                    two = rand() % 4;
                    if (two == 0 && disabled4 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♠    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled4++;
                    } else if (two == 1 && disabled5 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♥    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled5++;
                    } else if (two == 2 && disabled6 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♦    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled6++;
                    } else if (two == 3 && disabled7 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♣    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled7++;
                    } else {
                        goto random_again;
                    }
                    value += 4;
                }
                if (random == 1) {
                    two = rand() % 4;
                    if (two == 0 && disabled4 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♠    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled4++;
                    } else if (two == 1 && disabled5 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♥    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled5++;
                    } else if (two == 2 && disabled6 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♦    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled6++;
                    } else if (two == 3 && disabled7 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♣    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled7++;
                    } else {
                        goto random_again;
                    }
                    value += 5;
                }
                if (random == 1) {
                    two = rand() % 4;
                    if (two == 0 && disabled4 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♠    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled4++;
                    } else if (two == 1 && disabled5 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♥    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled5++;
                    } else if (two == 2 && disabled6 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♦    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled6++;
                    } else if (two == 3 && disabled7 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♣    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled7++;
                    } else {
                        goto random_again;
                    }
                    value += 6;
                }
                if (random == 1) {
                    two = rand() % 4;
                    if (two == 0 && disabled4 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♠    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled4++;
                    } else if (two == 1 && disabled5 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♥    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled5++;
                    } else if (two == 2 && disabled6 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♦    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled6++;
                    } else if (two == 3 && disabled7 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♣    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled7++;
                    } else {
                        goto random_again;
                    }
                    value += 7;
                }
                if (random == 1) {
                    two = rand() % 4;
                    if (two == 0 && disabled4 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♠    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled4++;
                    } else if (two == 1 && disabled5 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♥    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled5++;
                    } else if (two == 2 && disabled6 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♦    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled6++;
                    } else if (two == 3 && disabled7 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♣    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled7++;
                    } else {
                        goto random_again;
                    }
                    value += 8;
                }
                if (random == 1) {
                    two = rand() % 4;
                    if (two == 0 && disabled4 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♠    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled4++;
                    } else if (two == 1 && disabled5 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♥    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled5++;
                    } else if (two == 2 && disabled6 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♦    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled6++;
                    } else if (two == 3 && disabled7 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♣    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled7++;
                    } else {
                        goto random_again;
                    }
                    value += 9;
                }
                if (random == 1) {
                    two = rand() % 4;
                    if (two == 0 && disabled4 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♠    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled4++;
                    } else if (two == 1 && disabled5 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♥    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled5++;
                    } else if (two == 2 && disabled6 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♦    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled6++;
                    } else if (two == 3 && disabled7 == 0) {
                        printf("┌─────────┐\n│ 2       │\n│         │\n│    ♣    │\n│         │\n│       2 │\n└─────────┘\n");
                        disabled7++;
                    } else {
                        goto random_again;
                    }
                    value += 10;
                }
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
