#include <stdio.h>

int main() {
    int day, year;
    scanf("%d/%*d/%d", &day, &year); // %*d skips the month (04)
    printf("%02d-Apr-%d\n", day, year);
    return 0;
}
