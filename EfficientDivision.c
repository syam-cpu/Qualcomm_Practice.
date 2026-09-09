#include <stdio.h>

int main(void) {
    
    int a ;
    int b;

    // bx  =  a
    // b( 2^k1 + 2^k2 + ... + 2^kn ) = a
    // b ( 2^k2 + 2^k3 + ... + 2^kn ) = a - b(2^k1)
    scanf("%d %d", &a, &b); 
    int ans = 0;
    while (a >= b)
    {
        int c = 0;

        while (( b << (c + 1) ) <= a)
        {
            c++;
        }
        ans  += (1 << c);
        a -= (b << c);
    }
    printf("%d\n", ans);
    return 0;
}
