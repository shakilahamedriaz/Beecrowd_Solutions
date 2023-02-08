#include <stdio.h>

int main()
{
    int DD, MM, YY;
    char C;
    scanf("%d %c %d %c %d", &DD, &C, &MM, &C, &YY);

    printf("%d%c%d%c%d\n", MM, C, DD, C, YY);
    printf("%d%c%d%c%d\n", YY, C, MM, C, DD);
    C = '-';
    printf("%d%c%d%c%d\n", DD, C, MM, C, YY);

    return 0;
}
