int checkDigits(int len, char* pass) {
    int check = 0;
    for (int i = 0; i < len; i++) {
        if ((pass[i] >= 48) && (pass[i] <= 57)){
            check++;
        }
    }
    return check;
}

int checkLowerLetters(int len, char* pass) {
    int check = 0;
    for (int i = 0; i < len; i++) {
        if ((pass[i] >= 97) && (pass[i] <= 122)){
            check++;
        }
    }
    return check;
}

int checkUpperLetters(int len, char* pass) {
    int check = 0;
    for (int i = 0; i < len; i++) {
        if ((pass[i] >= 65) && (pass[i] <= 90)){
            check++;
        }
    }
    return check;
}

int checkSpecials(int len, char* pass) {
    int check = 0;
    for (int i = 0; i < len; i++) {
        if (((pass[i] >= 33) && (pass[i] <= 45)) ||  (pass[i] == '@') || (pass[i] == '^')){
            check++;
        }
    }
    return check;
}
int minimumNumber(int n, char* password) {
    int res = 0;
    int specials, lower, upper, digits;
    
    specials = checkSpecials(n, password);
    lower = checkLowerLetters(n, password);
    upper = checkUpperLetters(n, password);
    digits = checkDigits(n, password);
    
    
    if (n <= 3) {
        res = 6 - n;
    } else if (n > 3) {
        if (n < 6) {
            if ((specials > 0) && (lower > 0) && (upper > 0) && (digits > 0)) {
                res = 6 - n;
            } else {
                if (specials == 0) res++;
                if (lower == 0) res++;
                if (upper == 0) res++;
                if (digits == 0) res++;
                if ((res + n) < 6) res += (6 - (res + n));
            }
        } else {
            if (specials == 0) res++;
            if (lower == 0) res++;
            if (upper == 0) res++;
            if (digits == 0) res++;   
        }
    }
    
    return res;
}