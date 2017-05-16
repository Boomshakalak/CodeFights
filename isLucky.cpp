bool isLucky(int n) {
    string s = to_string(n);
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0 ; i <s.size()/2;++i)
        cnt1+=s[i]-'0';
    for (int i = s.size()-1 ; i >=s.size()/2;--i)
    cnt2+=s[i]-'0';
    return cnt1==cnt2;
}
