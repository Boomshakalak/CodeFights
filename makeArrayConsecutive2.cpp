int makeArrayConsecutive2(std::vector<int> statues) {
    int len = statues.size();
    sort(statues.begin(),statues.end());
    return (statues[len-1]-statues[0])+1-len;
}
