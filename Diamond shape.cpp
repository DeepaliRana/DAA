// diamond shape 
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows (should be an odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number of rows.\n");
        return 1;
    }

    int spaces = n / 2;
    int stars = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }

        for (int j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");

        if (i <= n / 2) {
            spaces--;
            stars += 2;
        } else {
            spaces++;
            stars -= 2;
        }
    }

    return 0;
}

