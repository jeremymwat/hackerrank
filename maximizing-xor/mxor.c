#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int max (int a, int b) {
    return a > b ? a : b;
}

/*
 * Complete the function below.
 */

int maxXor(int l, int r) {
    int maxR = 0;

    for (int i = l; i <= r; i++) {
        for (int j = i; j <= r; j++) {
            maxR = max((i^j),maxR);
        }

    }

    return maxR;

}
int main() {
    int res;
    int _l;
    scanf("%d", &_l);

    int _r;
    scanf("%d", &_r);

    res = maxXor(_l, _r);
    printf("%d", res);

    return 0;
}
