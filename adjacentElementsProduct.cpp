int adjacentElementsProduct(std::vector<int> inputArray) {
    int res= inputArray[0]*inputArray[1];
    for (int i =1 ; i<inputArray.size()-1;++i){
        res = res>inputArray[i]*inputArray[i+1]?res:inputArray[i]*inputArray[i+1];
    }
    return res;
}
