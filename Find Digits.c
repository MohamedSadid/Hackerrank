int findDigits(int n) {
    
    int len = floor(log10(abs(n))) + 1;
    int arr[len];
    int temp = n;
    int count = 0;
    
    for (int i = len - 1; i >= 0; i--) {
        arr[i] = n % 10;
        n /= 10;
    }
    
    for (int i = 0; i < len; i++) {
        if (arr[i] == 0) continue;
        
        if (temp % arr[i] == 0) {
            count++;
        }
    }
    
    return count;
}