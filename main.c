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
    char card[] = "";
    int loop = 0, chip = 1000, random, value = 0, player = 0, dealer = 0, pilihan;
    int a = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, ten = 0, j = 0, q = 0, k= 0;
    short disabled0 = 0, disabled1 = 0, disabled2 = 0, disabled3 = 0; // A
    short disabled4 = 0, disabled5 = 0, disabled6 = 0, disabled7 = 0; // 2
    short disabled8 = 0, disabled9 = 0, disabled10 = 0, disabled11 = 0; // 3
    short disabled12 = 0, disabled13 = 0, disabled14 = 0, disabled15 = 0; // 4
    short disabled16 = 0, disabled17 = 0, disabled18 = 0, disabled19 = 0; // 5
    short disabled20 = 0, disabled21 = 0, disabled22 = 0, disabled23 = 0; // 6
    short disabled24 = 0, disabled25 = 0, disabled26 = 0, disabled27 = 0; // 7
    short disabled28 = 0, disabled29 = 0, disabled30 = 0, disabled31 = 0; // 8
    short disabled32 = 0, disabled33 = 0, disabled34 = 0, disabled35 = 0; // 9
    short disabled36 = 0, disabled37 = 0, disabled38 = 0, disabled39 = 0; // 10
    short disabled40 = 0, disabled41 = 0, disabled42 = 0, disabled43 = 0; // J
    short disabled44 = 0, disabled45 = 0, disabled46 = 0, disabled47 = 0;// Q
    short disabled48 = 0, disabled49 = 0, disabled50 = 0, disabled51 = 0; // K

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

        while (pilihan == 0) {
            // ini buat ngasih 2 kartu ke player ya
            random_again:
            if (player < 2) {
                if (player == 0) {
                    printf("KARTU PLAYER:\n");
                }
                random = rand() % 13;
                player++;
            } else {
                // ini buat ngasih 2 kartu ke dealernya juga
                if (dealer < 2) {
                    if (dealer == 0) {
                        printf("KARTU DEALER:\n");
                    }
                    if (dealer != 1) {
                        random = rand() % 13;
                    } else if (dealer == 1) {
                        random = 13;
                        printf("┌─────────┐\n│ ?       │\n│         │\n│    ?    │\n│         │\n│       ? │\n└─────────┘\n");
                    }
                    dealer++;
                } else {
                    break;
                }
            }

            // ini buat nampilin kartu pokonya mah sama valuenya
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
                else if (random == 2) {
                    three = rand() % 4;
                    if (three == 0 && disabled8 == 0) {
                        printf("┌─────────┐\n│ 3       │\n│         │\n│    ♠    │\n│         │\n│       3 │\n└─────────┘\n");
                        disabled8++;
                    } else if (three == 1 && disabled9 == 0) {
                        printf("┌─────────┐\n│ 3       │\n│         │\n│    ♥    │\n│         │\n│       3 │\n└─────────┘\n");
                        disabled9++;
                    } else if (three == 2 && disabled10 == 0) {
                        printf("┌─────────┐\n│ 3       │\n│         │\n│    ♦    │\n│         │\n│       3 │\n└─────────┘\n");
                        disabled10++;
                    } else if (three == 3 && disabled11 == 0) {
                        printf("┌─────────┐\n│ 3       │\n│         │\n│    ♣    │\n│         │\n│       3 │\n└─────────┘\n");
                        disabled11++;
                    } else {
                        goto random_again;
                    }
                    value += 3;
                }
                else if (random == 3) {
                    four = rand() % 4;
                    if (four == 0 && disabled12 == 0) {
                        printf("┌─────────┐\n│ 4       │\n│         │\n│    ♠    │\n│         │\n│       4 │\n└─────────┘\n");
                        disabled12++;
                    } else if (four == 1 && disabled13 == 0) {
                        printf("┌─────────┐\n│ 4       │\n│         │\n│    ♥    │\n│         │\n│       4 │\n└─────────┘\n");
                        disabled13++;
                    } else if (four == 2 && disabled14 == 0) {
                        printf("┌─────────┐\n│ 4       │\n│         │\n│    ♦    │\n│         │\n│       4 │\n└─────────┘\n");
                        disabled14++;
                    } else if (four == 3 && disabled15 == 0) {
                        printf("┌─────────┐\n│ 4       │\n│         │\n│    ♣    │\n│         │\n│       4 │\n└─────────┘\n");
                        disabled15++;
                    } else {
                        goto random_again;
                    }
                    value += 4;
                }
                else if (random == 4) {
                    five = rand() % 4;
                    if (five == 0 && disabled16 == 0) {
                        printf("┌─────────┐\n│ 5       │\n│         │\n│    ♠    │\n│         │\n│       5 │\n└─────────┘\n");
                        disabled16++;
                    } else if (five == 1 && disabled17 == 0) {
                        printf("┌─────────┐\n│ 5       │\n│         │\n│    ♥    │\n│         │\n│       5 │\n└─────────┘\n");
                        disabled17++;
                    } else if (five == 2 && disabled18 == 0) {
                        printf("┌─────────┐\n│ 5       │\n│         │\n│    ♦    │\n│         │\n│       5 │\n└─────────┘\n");
                        disabled18++;
                    } else if (five == 3 && disabled19 == 0) {
                        printf("┌─────────┐\n│ 5       │\n│         │\n│    ♣    │\n│         │\n│       5 │\n└─────────┘\n");
                        disabled19++;
                    } else {
                        goto random_again;
                    }
                    value += 5;
                }
                else if (random == 5) {
                    six = rand() % 4;
                    if (six == 0 && disabled20 == 0) {
                        printf("┌─────────┐\n│ 6       │\n│         │\n│    ♠    │\n│         │\n│       6 │\n└─────────┘\n");
                        disabled20++;
                    } else if (six == 1 && disabled21 == 0) {
                        printf("┌─────────┐\n│ 6       │\n│         │\n│    ♥    │\n│         │\n│       6 │\n└─────────┘\n");
                        disabled21++;
                    } else if (six == 2 && disabled22 == 0) {
                        printf("┌─────────┐\n│ 6       │\n│         │\n│    ♦    │\n│         │\n│       6 │\n└─────────┘\n");
                        disabled22++;
                    } else if (six == 3 && disabled23 == 0) {
                        printf("┌─────────┐\n│ 6       │\n│         │\n│    ♣    │\n│         │\n│       6 │\n└─────────┘\n");
                        disabled23++;
                    } else {
                        goto random_again;
                    }
                    value += 6;
                }
                else if (random == 6) {
                    seven = rand() % 4;
                    if (seven == 0 && disabled24 == 0) {
                        printf("┌─────────┐\n│ 7       │\n│         │\n│    ♠    │\n│         │\n│       7 │\n└─────────┘\n");
                        disabled24++;
                    } else if (seven == 1 && disabled25 == 0) {
                        printf("┌─────────┐\n│ 7       │\n│         │\n│    ♥    │\n│         │\n│       7 │\n└─────────┘\n");
                        disabled25++;
                    } else if (seven == 2 && disabled26 == 0) {
                        printf("┌─────────┐\n│ 7       │\n│         │\n│    ♦    │\n│         │\n│       7 │\n└─────────┘\n");
                        disabled26++;
                    } else if (seven == 3 && disabled27 == 0) {
                        printf("┌─────────┐\n│ 7       │\n│         │\n│    ♣    │\n│         │\n│       7 │\n└─────────┘\n");
                        disabled27++;
                    } else {
                        goto random_again;
                    }
                    value += 7;
                }
                else if (random == 7) {
                    eight = rand() % 4;
                    if (eight == 0 && disabled28 == 0) {
                        printf("┌─────────┐\n│ 8       │\n│         │\n│    ♠    │\n│         │\n│       8 │\n└─────────┘\n");
                        disabled28++;
                    } else if (eight == 1 && disabled29 == 0) {
                        printf("┌─────────┐\n│ 8       │\n│         │\n│    ♥    │\n│         │\n│       8 │\n└─────────┘\n");
                        disabled29++;
                    } else if (eight == 2 && disabled30 == 0) {
                        printf("┌─────────┐\n│ 8       │\n│         │\n│    ♦    │\n│         │\n│       8 │\n└─────────┘\n");
                        disabled30++;
                    } else if (eight == 3 && disabled31 == 0) {
                        printf("┌─────────┐\n│ 8       │\n│         │\n│    ♣    │\n│         │\n│       8 │\n└─────────┘\n");
                        disabled31++;
                    } else {
                        goto random_again;
                    }
                    value += 8;
                }
                else if (random == 8) {
                    nine = rand() % 4;
                    if (nine == 0 && disabled32 == 0) {
                        printf("┌─────────┐\n│ 9       │\n│         │\n│    ♠    │\n│         │\n│       9 │\n└─────────┘\n");
                        disabled32++;
                    } else if (nine == 1 && disabled33 == 0) {
                        printf("┌─────────┐\n│ 9       │\n│         │\n│    ♥    │\n│         │\n│       9 │\n└─────────┘\n");
                        disabled33++;
                    } else if (nine == 2 && disabled34 == 0) {
                        printf("┌─────────┐\n│ 9       │\n│         │\n│    ♦    │\n│         │\n│       9 │\n└─────────┘\n");
                        disabled34++;
                    } else if (nine == 3 && disabled35 == 0) {
                        printf("┌─────────┐\n│ 9       │\n│         │\n│    ♣    │\n│         │\n│       9 │\n└─────────┘\n");
                        disabled35++;
                    } else {
                        goto random_again;
                    }
                    value += 9;
                }
                else if (random == 9) {
                    ten = rand() % 4;
                    if (ten == 0 && disabled36 == 0) {
                        printf("┌─────────┐\n│ 10      │\n│         │\n│    ♠    │\n│         │\n│      10 │\n└─────────┘\n");
                        disabled36++;
                    } else if (ten == 1 && disabled37 == 0) {
                        printf("┌─────────┐\n│ 10      │\n│         │\n│    ♥    │\n│         │\n│      10 │\n└─────────┘\n");
                        disabled37++;
                    } else if (ten == 2 && disabled38 == 0) {
                        printf("┌─────────┐\n│ 10      │\n│         │\n│    ♦    │\n│         │\n│      10 │\n└─────────┘\n");
                        disabled38++;
                    } else if (ten == 3 && disabled39 == 0) {
                        printf("┌─────────┐\n│ 10      │\n│         │\n│    ♣    │\n│         │\n│      10 │\n└─────────┘\n");
                        disabled39++;
                    } else {
                        goto random_again;
                    }
                    value += 10;
                }
            }
            else if (random == 10) {
                    j = rand() % 4;
                    if (j == 0 && disabled40 == 0) {
                        printf("┌─────────┐\n│ J       │\n│         │\n│    ♠    │\n│         │\n│       J │\n└─────────┘\n");
                        disabled40++;
                    } else if (j == 1 && disabled41 == 0) {
                        printf("┌─────────┐\n│ J       │\n│         │\n│    ♥    │\n│         │\n│       J │\n└─────────┘\n");
                        disabled41++;
                    } else if (j == 2 && disabled42 == 0) {
                        printf("┌─────────┐\n│ J       │\n│         │\n│    ♦    │\n│         │\n│       J │\n└─────────┘\n");
                        disabled42++;
                    } else if (j == 3 && disabled43 == 0) {
                        printf("┌─────────┐\n│ J       │\n│         │\n│    ♣    │\n│         │\n│       J │\n└─────────┘\n");
                        disabled43++;
                    } else {
                        goto random_again;
                    }
                    value += 10;
                }
                else if (random == 11) {
                    q = rand() % 4;
                    if (q == 0 && disabled44 == 0) {
                        printf("┌─────────┐\n│ Q       │\n│         │\n│    ♠    │\n│         │\n│       Q │\n└─────────┘\n");
                        disabled44++;
                    } else if (q == 1 && disabled45 == 0) {
                        printf("┌─────────┐\n│ Q       │\n│         │\n│    ♥    │\n│         │\n│       Q │\n└─────────┘\n");
                        disabled45++;
                    } else if (q == 2 && disabled46 == 0) {
                        printf("┌─────────┐\n│ Q       │\n│         │\n│    ♦    │\n│         │\n│       Q │\n└─────────┘\n");
                        disabled46++;
                    } else if (q == 3 && disabled47 == 0) {
                        printf("┌─────────┐\n│ Q       │\n│         │\n│    ♣    │\n│         │\n│       Q │\n└─────────┘\n");
                        disabled47++;
                    } else {
                        goto random_again;
                    }
                    value += 10;
                }
                else if (random == 12) {
                    k = rand() % 4;
                    if (k == 0 && disabled48 == 0) {
                        printf("┌─────────┐\n│ K       │\n│         │\n│    ♠    │\n│         │\n│       K │\n└─────────┘\n");
                        disabled48++;
                    } else if (k == 1 && disabled49 == 0) {
                        printf("┌─────────┐\n│ K       │\n│         │\n│    ♥    │\n│         │\n│       K │\n└─────────┘\n");
                        disabled49++;
                    } else if (k == 2 && disabled50 == 0) {
                        printf("┌─────────┐\n│ K       │\n│         │\n│    ♦    │\n│         │\n│       K │\n└─────────┘\n");
                        disabled50++;
                    } else if (k == 3 && disabled51 == 0) {
                        printf("┌─────────┐\n│ K       │\n│         │\n│    ♣    │\n│         │\n│       K │\n└─────────┘\n");
                        disabled51++;
                    } else {
                        goto random_again;
                    }
                    value += 10;
                }
        }
        printf("Terima Kasih dan Selamat Jumpa Lagi!\n");
        return 0;
    }
    printf("\n\nChip Anda Kurang Silahkan Ulang Program Lagi\n");
    return 0;
}