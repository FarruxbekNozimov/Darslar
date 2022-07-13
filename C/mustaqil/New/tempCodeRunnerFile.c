printf("\n");
    int k = 0;
    for (int i = 1; i <= n; ++i, k = 0) {
        for (int space = 1; space <= n - i; ++space) {
            printf("  ");
        }
        while (k != 2 * i - 1) {
            if (k == 0 || k == 2 * i - 2 || k == n/2) {
                printf("F ");
            }
            else {
                printf("  ");
            }
            // printf("* ");
            ++k;
        }
        printf("\n");
    }