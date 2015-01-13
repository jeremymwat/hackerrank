
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
findPalind(char *arr)
{
    int counter = 0;
    int flag = 1;
    int len = strlen(arr);
    
    for (int i = 0; i < len; i++) 
        counter ^= 1 << ((int) arr[i]) - 97;
    
    if ((counter & (~counter + 1)) == counter && len % 2 == 1)
        flag = 0;
    else if (counter == 0 && len % 2 == 0)
        flag = 0;
    
    
    
    // Find the required answer here. Print Yes or No at the end of this function depending on your inspection of the string
    if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");
    
    return;
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}
