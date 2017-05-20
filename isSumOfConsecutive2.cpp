int isSumOfConsecutive2(int n) {
    int i = 0;
    int res = 0;
    while(++i <= n/2){
        int j = i ;
        int tmp = 0;
        while (tmp < n){
            tmp+=j++;
        }
        if (tmp == n) res++;
    }
    return res;
}
