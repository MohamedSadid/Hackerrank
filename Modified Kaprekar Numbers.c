void kaprekarNumbers(int p, int q) {
    long long sq, sqCpy, power, l, r;
    int len;
    int count = 0;
    
    for (long long i = p; i <= q; i++) {
        sq = i * i;
        sqCpy = sq;
        len = floor(log10(abs(sq))) + 1;
        len += (len % 2);
        
        power = 10;
        for (int k = 1; k < len / 2; k++) {
            power *= 10;
        }
        
        r = sq % power;
        l = sq / power;
        
        if ((r + l) == i) {
            printf("%lld ", i);
            count++;
        }
        
    }
    
    if (count == 0) printf("INVALID RANGE");

}