#include <stdio.h>

int main() {
    int d, m, y;
    int max_day = 0;

    scanf("%d %d %d", &d, &m, &y);

    if (m < 1 || m > 12) {
        printf("INVALID\n");
    } else {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            max_day = 31;
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            max_day = 30;
       