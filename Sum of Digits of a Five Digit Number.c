#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int *convToArr(int, int);

int main() {
	
    int n, sum = 0;
    scanf("%d", &n);
    
    int len = floor(log10(abs(n))) + 1;
    int *ptrToArr = convToArr(n, len);
    
    for (int i = 0; i < len; i++) {
        sum += ptrToArr[i];
    }
    
    printf("%d", sum);
    return 0;
}

int *convToArr(int num, int len){
    int *ptrToHeap = (int*)malloc(num * (sizeof(int)));
    
    for (int i = len - 1; i >= 0; i--) {
        ptrToHeap[i] = num % 10;
        num /= 10;
    }
    return ptrToHeap;
}