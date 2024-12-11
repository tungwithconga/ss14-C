#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Xin chao toi ten la Tung!";
    int word_count = 0;
    int in_word = 0;    
    printf("Chuoi ban dau: %s\n", str);
    for (int i = 0; i < strlen(str); i++) {
        if (!isspace(str[i])) { 
            if (!in_word) {
                word_count++;
                in_word = 1;  
            }
        } else {
            in_word = 0; 
        }
    }
    printf("So tu trong chuoi la: %d\n", word_count);
}

