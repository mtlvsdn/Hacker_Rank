long repeatedString(string s, long n) {
    string copy;
    copy = s;
    long counter = 0;
    long noOfA = 0;
    long noOfALap = 0;
    long digits = 0;
    if (s.length() == 1) {
        if (s[0] == 'a') {
            noOfALap++;
        }
        digits++;
    } else {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a') {
                noOfALap++;
            }
            digits++;
        }
    }
    long laps = n/digits;
    counter = laps * digits;
    noOfA = noOfALap * laps;
    if (n % digits == 0) {
        return noOfA;
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            noOfA++;
        }
        counter++;
        if (counter == n) {
            break;
        }
    }
    return noOfA;
    
    /*while (true) {
        for (int i = 0; i < s.length(); i++) {
            counter++;
            if (s[i] == 'a') {
                noOfA++;
            }
            if (counter == n) {
                break;
            }
        }
        if (counter == n) {
            break;
        }
    }
    return noOfA;*/
    
}
