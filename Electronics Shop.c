int max(int num1, int num2) { return ((num1 > num2) ? (num1) : (num2)); }
int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b) {
    int res = -1;
    
    for (int j = 0; j < keyboards_count; j++) {
        for (int i = 0; i < drives_count; i++) {
            if ((keyboards[j] + drives[i]) <= b) res = max(res, (keyboards[j] + drives[i]));
        }
    }
    
    return res;
}