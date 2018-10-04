int max(int num1, int num2) {
    return (num1 > num2) ? (num1) : (num2);
}
int maximizingXor(int l, int r) {
    int res = 0;
    for (int i = l; i <= r; i++) {
        for (int j = l; j <= r; j++) {
            res = max(res, (i ^ j));
        }
    }
    return res;
}