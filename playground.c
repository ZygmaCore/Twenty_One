#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); // Wajib untuk mendukung output Unicode di terminal

    wchar_t carName[] = L"┌─────────┐\n│ A       │\n│         │\n│    ♠    │\n│         │\n│       A │\n└─────────┘\n";

    for (int i = 0; carName[i] != L'\0'; ++i) {
        if (carName[i] == L'A' || carName[i] == L'♠') {
            carName[i] = L'?';
        }
        printf("%lc", carName[i]);
    }
    return 0;
}