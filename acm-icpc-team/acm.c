#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int stringBitAnd (char* a, char* b){
	int acc = 0;
	int i = 0;
	while(a[i]) {
		if (a[i] == '1' || b[i] == '1')
			acc++;
		i++;
	}
	return acc;
}

int main() {

	char* topics[500];
	
    int N, M;
    scanf("%d %d", &N, &M);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i;
    for (i = 0;i < N;i++) {
    	topics[i] = malloc(sizeof(char) * (M+1));
        scanf("%s",topics[i]);
    }
    
    int largest = 0;
    int numberHaving = 0;
    int ntopics = 0;

    for (int j = 0; j < N; j++){
    	for (int k = j; k < N; k++) {
    		ntopics = stringBitAnd(topics[j], topics[k]);
    		if (ntopics == largest)
    			numberHaving++;
    		else if (ntopics > largest) {
    			numberHaving = 1;
    			largest = ntopics;
    		}
    	}

    }
    printf("%d\n%d",largest,numberHaving);

    // be a good c coder

    for (int l = 0;l < N;l++) {
    	free(topics[l]);
    }
    return 0;
}
