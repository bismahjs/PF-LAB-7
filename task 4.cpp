#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^0-9]", str);   // read everything EXCEPT digits (0-9)

    printf("String without numbers: %s\n", str);

    return 0;
}

