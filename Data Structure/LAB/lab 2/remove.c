#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int d[n];

    printf("Enter elements (sorted): ");
    for (i = 0; i < n; i++) {
        scanf("%d", &d[i]);
    }

    for (i = 0; i < n - 1; i++) {
        if (d[i] == d[i + 1]) {
            for (j = i; j < n - 1; j++) {
                d[j] = d[j + 1];
            }
            n--;  
            i--;  
        }
    }

    printf("After removing duplicate elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", d[i]);
    }

    return 0;
}

