#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Oi oi oi!";
    int length = strlen(str); 

    printf("Chuoi dao nguoc: ");

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

