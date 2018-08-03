#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int a , b, andMax, orMax, xorMax, count = 0;
    int i = 0;
    
    for (a = 1; a <= k; a++) {
        for (b = a + 1; b <= n; b++) {
            count++;
        }
    }
    
    int andArr[count];
    int orArr[count];
    int xorArr[count];
    
    for (a = 1; a <= k; a++) {
        for (b = a + 1; b <= n; b++) {
            andArr[i] = a & b;
            orArr[i] = a | b;
            xorArr[i] = a ^ b;
            i++;
        }
    }
    
    andMax = 0;
    for (i = 0; i < count; i++) {
        if ((andArr[i] > andMax) && (andArr[i] < k)) {
            andMax = andArr[i];
        }
    }
    
    orMax = 0;
    for (i = 0; i < count; i++) {
        if ((orArr[i] > orMax) && (orArr[i] < k)) {
            orMax = orArr[i];
        }
    }
    
    xorMax = 0;
    for (i = 0; i < count; i++) {
        if ((xorArr[i] > xorMax) && (xorArr[i] < k)) {
            xorMax = xorArr[i];
        }
    }
    printf("%d\n%d\n%d\n", andMax, orMax, xorMax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
