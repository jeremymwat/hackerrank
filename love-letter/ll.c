#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    char str[10001];
    int array[10] = {-1};
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        int ans = 0;
        scanf("%s",str);
        int k = strlen(str) - 1;
        int j = 0;
        while (j < k ) {//&& j < k) {
            ans += abs((int) str[j] - (int) str[k]);
            ++j;
            --k;
        }
        array[i] = ans;
    }
    int m = 0;
    
    while (array[m] != -1 && m < n) {
        printf("%d\n",array[m]);
        ++m;
        
    }
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
