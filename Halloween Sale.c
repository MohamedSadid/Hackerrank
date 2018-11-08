int howManyGames(int p, int d, int m, int s) {
    int total = p;
    int res = p;
    int count = 0;
    
    while (total <= s) {
        count++;
        p -= d;
        if (p < m) p = m;
        total += p;
    }
    
    return count;
}