#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap 2 so a, b: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    int ucln = x;

    int bcnn = (a * b) / ucln;

    printf("UCLN cua %d va %d la: %d\n", a, b, ucln);
    printf("BCNN cua %d va %d la: %d\n", a, b, bcnn);

    return 0;
