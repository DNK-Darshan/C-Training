#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};  // ASCII characters

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    // Count each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    // Print duplicates only
    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) {
            printf("%c is %d time\n", i, count[i]);
        }
    }

    return 0;
}