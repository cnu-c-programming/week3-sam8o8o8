#include <stdio.h>
#include <stdarg.h>

int max_of(int n, ...) {
    int maxNum = 0;
    va_list ap;
    va_start(ap, n);

    for (int i=0; i<n; i++) {
        int currentNum = va_arg(ap, int);
        if (maxNum < currentNum) {
            maxNum = currentNum;
        }
    }
    va_end(ap);

    return maxNum;
}

int main() {
    printf("%d\n", max_of(4, 5, 12, 3, 9));
    printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    printf("%d\n", max_of(3, 100, 200, 300));
    return 0;
}
