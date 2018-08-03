#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int len, sum = 0;
    scanf("%d", &len);
    
    int Arr[len];
    for (int i = 0; i < len; i++) {
        scanf("%d", &Arr[i]);
        sum += Arr[i];
    }
    
    printf("%d", sum);
    return 0;
}