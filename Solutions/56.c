#include <stdio.h>
#include <math.h>

int main() {
    int A, B, i;
    scanf("%d %d", &A, &B);

    for(i = ceil(sqrt(A)); i*i <= B; i++) {
        printf("%d ", i*i);
    }

    return 0;
}
