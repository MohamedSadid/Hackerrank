int beautifulDays(int i, int j, int k) {
    
    int count = 0;
    int p, rev;
    
    for(int temp = i; temp <= j; temp++) {
        
        p = temp;
        rev = 0;
        
        while(p != 0) {
            rev = rev * 10 + (p % 10);
            p = p / 10;
        }
         
        if(abs(rev - temp) % k == 0) count++;
    }
    
    return count;
    }