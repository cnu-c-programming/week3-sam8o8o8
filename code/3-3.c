#include <stdio.h>
#include <stdarg.h>

int average(int n, ...) {
    int sum = 0;
    va_list ap;
    va_start(ap, n);
    
    for (int i=0; i<n; i++) {
        sum += va_arg(ap, int);
    }
    va_end(ap);

    int result = sum / n;
    return result;
}

int main() {
    printf("%d\n", average(3, 10, 20, 30));
    printf("%d\n", average(5, 10, 20, 30, 40, 50));
    return 0;
}
