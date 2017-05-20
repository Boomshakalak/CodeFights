bool isPower(int n) {
    if (n==1) return true;
    vector<int> candi;
    for (int i = 2; i <=sqrt(n);i++){
        if (n%i == 0) candi.push_back(i);
    }
    for (auto x : candi){
        int temp = n;
        while (temp % x == 0){
            temp/=x;
        }
        if (temp == 1) return true;
    }
    return false;
}
