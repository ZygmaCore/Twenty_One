#include <stdio.h>
#include <string.h>

struct Akun {
    char username[30];
    char password[30];
};

int main() {
    struct Akun daftarAkun[10] = {
        {"admin", "admin123"},
        {"user", "rahasia"},
        {"pimpinan", "atasan"}
    };

    int jumlahAkun = 3;

    int dataNilai[50];
    int jumlahNilai = 0;

    int statusLogin = 0;
    char userAktif[30] = "";
    int pilihan;

    char inputUsername[30];
    char inputPassword[30];
    int inputNilai;

    do {
        printf("\n====================================\n");
        printf("         Sistem Nilai \n");
        printf("====================================\n");

        if (statusLogin == 1) {
            printf("Status : Login sebagai [%s]\n", userAktif);
        } else {
            printf("Status : Belum Login\n");
        }

        printf("------------------------------------\n");
        printf("1. Register Akun Baru\n");
        printf("2. Login\n");
        printf("3. Add Data\n");
        printf("4. Show Data\n");
        printf("5. Logout\n");
        printf("6. Exit\n");
        printf("Pilih menu (1-6): ");

        if (scanf("%d", &pilihan) != 1) {
            while (getchar() != '\n');
            pilihan = 0;
        }

        switch (pilihan) {

            case 1:
                if (statusLogin == 1) {
                    printf("\nAnda sedang login. Silakan logout terlebih dahulu untuk mendaftar akun baru.\n");
                } else if (jumlahAkun >= 10) {
                    printf("\nKapasitas pendaftaran penuh! Tidak bisa menambah akun baru.\n");
                } else {
                    printf("\n--- REGISTRASI AKUN ---\n");
                    printf("Masukkan Username baru : ");
                    scanf("%29s", daftarAkun[jumlahAkun].username);

                    printf("Masukkan Password baru : ");
                    scanf("%29s", daftarAkun[jumlahAkun].password);

                    jumlahAkun++;
                    printf("\nRegistrasi berhasil! Silakan pilih menu Login.\n");
                }
                break;

            case 2:
                if (statusLogin == 1) {
                    printf("\nAnda sudah login. Silakan logout jika ingin berganti akun.\n");
                } else {
                    printf("\n--- LOGIN ---\n");
                    printf("Username : ");
                    scanf("%29s", inputUsername);
                    printf("Password : ");
                    scanf("%29s", inputPassword);

                    int ditemukan = 0;
                    for (int i = 0; i < jumlahAkun; i++) {
                        if (strcmp(inputUsername, daftarAkun[i].username) == 0 &&
                            strcmp(inputPassword, daftarAkun[i].password) == 0) {

                            statusLogin = 1;
                            strcpy(userAktif, daftarAkun[i].username);
                            ditemukan = 1;
                            break;
                        }
                    }
                    if (ditemukan == 1) {
                        printf("\nLogin berhasil!\n");
                    } else {
                        printf("\nUsername atau password salah.\n");
                    }
                }
                break;

            case 3:
                if (statusLogin == 1) {
                    if (jumlahNilai >= 50) {
                        printf("\nKapasitas data penuh! Tidak bisa menambah data baru.\n");
                    } else {
                        printf("\n--- ADD DATA NILAI ---\n");
                        printf("Masukkan Nilai (0-100) : ");

                        if (scanf("%d", &inputNilai) != 1) {
                            while (getchar() != '\n');
                            printf("\nInput tidak valid! Nilai harus berupa angka.\n");
                        } else if (inputNilai < 0 || inputNilai > 100) {
                            printf("\nNilai harus berada di antara 0 sampai 100.\n");
                        } else {
                            dataNilai[jumlahNilai] = inputNilai;
                            jumlahNilai++;
                            printf("\nData nilai berhasil ditambahkan!\n");
                        }
                    }
                } else {
                    printf("\nAkses ditolak! Anda harus login terlebih dahulu.\n");
                }
                break;

            case 4:
                if (statusLogin == 1) {
                    printf("\n--- Data Nilai ---\n");
                    if (jumlahNilai == 0) {
                        printf("Belum ada data nilai. Silakan tambah data melalui menu Add Data.\n");
                    } else {
                        for (int i = 0; i < jumlahNilai; i++) {
                            printf("Mahasiswa ke-%d : Nilai %d\n", i + 1, dataNilai[i]);
                        }
                    }
                } else {
                    printf("\nAkses ditolak! Anda harus login terlebih dahulu.\n");
                }
                break;

            case 5:
                if (statusLogin == 1) {
                    statusLogin = 0;
                    strcpy(userAktif, "");
                    printf("\nAnda telah berhasil logout.\n");
                } else {
                    printf("\nAnda belum login, tidak ada sesi untuk di-logout.\n");
                }
                break;

            case 6:
                printf("\nProgram selesai. Sampai jumpa!\n");
                break;

            default:
                printf("\nPilihan tidak valid. Silakan masukkan angka 1-6.\n");
        }
    } while (pilihan != 6);

    return 0;
}