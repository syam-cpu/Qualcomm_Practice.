#include <stdio.h>

void changeValue(int x);

int main(void) {
    int a = 42;
    changeValue(a);
    printf("Value of a after changeValue: %d\n", a);
    return 0;
}

void changeValue(int x) {
    x = 100; // This change will not affect the original variable 'a'
}
