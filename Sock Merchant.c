// Complete the sockMerchant function below.
int sockMerchant(int n, int ar_count, int* ar) {
    
    int temp;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = (i + 1); j < n; j++) {
            if (ar[j] < ar[i]) {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < n - 1; i++) {
        if (ar[i] == ar[i + 1]) {
            count++;
            i++;
        }
    }
    
    return count;
}