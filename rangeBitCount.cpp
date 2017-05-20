int rangeBitCount(int a, int b) {
    int rec[11]={0,1,1,2,1,2,2,3,1,2,2};
    int res = 0;
    for (int i =a;i <=b; ++i) res+=rec[i];
    return res;
}
