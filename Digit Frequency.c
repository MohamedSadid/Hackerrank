#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char *s = (char *)malloc(1000 * (sizeof(char)));
    for (int i = 0; i < 1000; i++) {
        scanf("%c", (s + i));
    }
    
    int arr1[strlen(s)];
    int arr2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int count = 0;
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < strlen(s); j++) {
          if ((s[j] - '0') == arr2[i]) {
              count++;
          }  
        }
        arr1[i] = count;
        count = 0;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    free(s);
    
    return 0;
}
