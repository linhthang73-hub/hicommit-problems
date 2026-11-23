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
           } else if (m == 2) {
            if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
                max_day = 29;
            } else {
                max_day = 28;
            }
        }
     if (d >= 1 && d <= max_day) {
            printf("VALID\n");
        } else {
            printf("INVALID\n");
        }
    }

    return 0;
}
       
        
      