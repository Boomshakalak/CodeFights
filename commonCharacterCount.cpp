int commonCharacterCount(std::string s1, std::string s2) {
    int count[26]={};
    int res= 0;
    for (auto x : s1)
        count[x-'a']++;
    for (auto x : s2){
        if (count[x-'a']) {
            res++;
            count[x-'a']--;
        }
    }
    return res;
}
