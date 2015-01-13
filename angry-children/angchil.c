#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000
#define MAX_VAL 1000000001

int candies[MAX] = {MAX_VAL};

static int sort_helper (const void *p1, const void *p2) {
    return *((int*) p1) - *((int*) p2);    
}


/** The code to read from STDIN and output to STDOUT has been provided by us, for convenience. You may or may not use this. **/
 
int main() {
    
    int N,K;
    int i;
    
    scanf("%d %d",&N,&K);
    for(i = 0;i < N;i++)
        scanf("%d",candies + i);
    
    qsort (&candies, i, sizeof(int), sort_helper);
    
    int min = MAX_VAL;
    int maybeMin;
    for (int j = 0; j + K -1 < i; j++) {    
        maybeMin = candies[j+K-1] - candies[j]; 
        min = maybeMin < min ? maybeMin : min;
    } 
        
    printf("%d\n",min);
    return 0;
}