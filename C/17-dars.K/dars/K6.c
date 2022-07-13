#include <stdio.h>

int kopayt(int son1, int son2) {
    if (son2 == 0)  
        return 0;
    return (son1 + kopayt(son1, son2 - 1));
}

int main() {
    int son1, son2;
    scanf("%d %d", &son1, &son2);
    
    printf("%d",kopayt(son1, son2));
    return 0;
}

