#include <stdio.h>
int main (void) {
    unsigned int from = 0xabcd;
    unsigned int to = ((from & 0xff) << 8) | (from >> 8);
    printf ("%04x\n", to);
    return 0;
}