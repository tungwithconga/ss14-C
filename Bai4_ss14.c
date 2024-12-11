#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Con ga gay le te!";
    char input;
    int count = 0; 
    printf("Nhap vao mot ky tu: ");
    scanf("%c", &input);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == input) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan \n", input, count);

    return 0;
}

