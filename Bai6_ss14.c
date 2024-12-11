#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Toi sinh nam 2005";
    int letter_count = 0; 
    printf("Chuoi ban dau: %s\n", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            letter_count++;
        }
    }
    printf("So chu cai trong chuoi la: %d\n", letter_count);
}

