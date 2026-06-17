#include <stdio.h>

int main() {
    int b, s, h, total, div, rem;

    scanf("%d %d %d", &b, &s, &h);

    total = (b * 11) + (s * 23) + (h * 29);

    div = total / 50;
    printf("%d\n", div);

    rem = total % 50;
    printf("%d\n", rem);

    return 0;
}
