// Complete the bonAppetit function below.
void bonAppetit(int bill_count, int* bill, int k, int b) {

    int sum = 0;
    
    for (int i = 0; i < bill_count; i++) {
        if (i == k) continue;
        sum += bill[i];
    }
    
    if (b > (sum / 2)) {
        printf("%d", b - (sum / 2));
    } else {
        printf("Bon Appetit");
    }
}