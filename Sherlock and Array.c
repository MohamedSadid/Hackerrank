char* balancedSums(int arr_count, int* arr) {
    
    if (arr_count == 1) return "YES";
    
    int i = 0;
    int j = arr_count - 1;
    int sum = 0;
    
    while (i != j) {
        if (sum > 0) {
            sum -= arr[j];
            j--;
        } else {
            sum += arr[i];
            i++;
        }
    }
    return (!sum) ? ("YES") : ("NO");
}