std::vector<int> sortByHeight(std::vector<int> a) {
    vector<int> copy;
    vector<int> tree;
    for (int i = 0 ; i < a.size(); i++){
        if (a[i] !=-1) copy.push_back(a[i]);
        else tree.push_back(i);
    }
    sort(copy.begin(),copy.end());
    vector<int> result(a.size());
    for (auto x: tree) result[x]=-1;
    int j =0;
    for (int i = 0 ; i < result.size(); i++){
        if (result[i]!=-1)result[i]=copy[j++];
    }
    return result;
}
