bool almostIncreasingSequence(std::vector<int> sequence) {
    int count = 0 ;
    if (sequence.size() < 3) return true;
    for (int i = 0 ;i< sequence.size()-1;++i){
        if (sequence[i+1]<=sequence[i]){
            count++;
            if (i){
                if (sequence[i-1] >= sequence[i+1]) sequence[i+1] = sequence[i];
            }
            else sequence[1] = min(sequence[0],sequence[1]);
        }
    }
     if (count>1) return false;
    return true;
}
