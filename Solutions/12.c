#include <stdio.h>
int main()
{
    int dress, shoe, gf, total, dis;
    scanf("%d%d%d", &dress, &shoe, &gf);

    total = (gf * (3 * dress + 2 * shoe));
    dis = total - 5000;

    printf("Total bill= %d\n", dis);
    return 0;
}
