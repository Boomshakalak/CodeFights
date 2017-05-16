std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    vector<string> res;
    int max = 0;
    for (auto x : inputArray){
        if (x.size()>max) max =x.size();
    }
    for (auto x: inputArray){
        if (x.size()==max)res.push_back(x);
    }
    return res;
}
