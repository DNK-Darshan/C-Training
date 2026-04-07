#include <stdio.h>

void main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 5; j >= 6-i; j--) {
            printf(" *");
        }
        printf("\n");
    }
}