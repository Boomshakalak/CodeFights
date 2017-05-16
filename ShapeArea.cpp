int shapeArea(int n) {
    int res = 0;
    int k = n;
    for (int i = 1 ; i <n ; i++){
        res += (2*i-1)*2;
    }
    return res+2*n-1;
}
