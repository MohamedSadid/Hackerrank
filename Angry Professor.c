char* angryProfessor(int k, int a_count, int* a) {

    char *yes = "YES";
    char *no = "NO";
    int res = 0;
    
    for (int i = 0; i < a_count; i++) {
        if (a[i] <= 0) {
            res++;
        }
    }
    
    return (res >= k) ? (no) : (yes);
}