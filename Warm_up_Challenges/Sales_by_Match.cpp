int sockMerchant(int n, vector<int> ar) {
    int newArray[100];
    for (int i = 1; i <= 100; i++) {
        newArray[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        newArray[ar[i]]++;
    }
    int pairs = 0;
    int num;
    for (int i = 1; i <= 100; i++) {
        if (newArray[i] % 2 == 0) {
            num = newArray[i] / 2;
            pairs += num;
        } else {
            if (newArray[i] == 1) {
                
            } else {
                newArray[i]--;
                num = newArray[i] / 2;
                pairs += num;
            }
        }
    }
    return pairs;
}
