#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Thanh Tung!";
    int length = strlen(str);
    printf("Chuoi da khai bao la: %s\n", str);
    printf("Cac ky tu trong chuoi cach nhau 1 dau cach:\n");
    for (int i = 0; i < length; i++) {
        printf("%c", str[i]);
        if (i < length - 1) { 
            printf(" ");
        }
    }
}

