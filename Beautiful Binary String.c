int beautifulBinaryString(char* b) {
    int res = 0;
    int temp;
    if (strlen(b) >= 3) {
        for (int i = 0; i < strlen(b) - 2;) {
            temp = res;
            if (b[i] == '0') {
                if ((b[i + 1] == '1') && (b[i + 2] == '0')) {
                    res++;
                }
            }
            (res > temp) ? (i += 3) : (i++);
        }   
    }
    return res;
}