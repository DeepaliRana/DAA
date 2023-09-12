//sand glass pattern
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

