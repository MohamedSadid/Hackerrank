int min (int num1, int num2) {
    return (num1 < num2) ? (num1) : (num2);
}
int minimumDistances(int a_count, int* a) {
    int ref = 100000;
    int res = ref;
    
    
    for (int i = 0; i < a_count; i++) {
        for (int j = (i + 1); j < a_count; j++) {
            if (a[i] == a[j]) {
                res = min(res, abs(j - i));
            }
        }
    }
    
    if (res == ref) res = -1;
    return res;
}