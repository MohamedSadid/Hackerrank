int  sum (int count,...) {
    
    int sum = 0;
    va_list lst;
    va_start(lst, count);
    
    for (int i = 0; i < count; i++) {
        int val = va_arg(lst, int);
        sum += val;
    }
    return sum;
}

int min(int count,...) {
    va_list lst;
    va_start(lst, count);
    int min = va_arg(lst, int);
    
    for (int i = 0; i < count; i++) {
        int val = va_arg(lst, int);
        if (val < min) {
            min = val;
        }
    }
    return min;
}

int max(int count,...) {
    va_list lst;
    va_start(lst, count);
    int max = va_arg(lst, int);
    
    for (int i = 0; i < count; i++) {
        int val = va_arg(lst, int);
        if (val > max) {
            max = val;
        }
    }
    return max;
}