int squareDigitsSequence(int a0) {
    unordered_set<int> us;
    int count = 0;
    int tmp = a0;
    while(us.find(tmp)==us.end()){
        us.insert(tmp);
        int tmp1=0;
        while(tmp){
            tmp1 += (tmp%10)*(tmp%10);
            tmp /= 10;
        }
        tmp = tmp1;
        count++;
    }
    return count+1;

}
