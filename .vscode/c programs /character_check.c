#include <stdio.h>

int main() {
    char a;
    printf("Enter the character: ");
    scanf("%c", &a);
    if (a >= 'A' && a <= 'Z') {
        printf("The character is uppercase\n");
    }
    else if (a >= 'a' && a <= 'z') {
        printf("The character is lowercase\n");
    }
    else if (a >= '0' && a <= '9') {
        printf("These are digits\n");
    }
    else {
        printf("It is a special symbol\n");
    }
    return 0;
}
