bool checkPalindrome(std::string inputString) {
    int s = inputString.size();
    if (s == 0 || s ==1) return true;
    string k = inputString.substr(1,s-2);
    if (inputString[0]==inputString[s-1]) return checkPalindrome(k);
    else return false;
}
