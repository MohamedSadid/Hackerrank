int viralAdvertising(int n) {
    int shared = 5;
    int liked;
    int cumulative = 0;
    
    for (int i = 0; i < n; i++) {
        liked = floor(shared / 2);
        shared = liked * 3;
        cumulative += liked;
    }
    
    return cumulative;
}