class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
    map<int,int> freq;
    for (int i : nums) {
      freq[i]++;
    }
    for(auto &p:freq){
        for(auto & q:freq){
            if(p.first<q.first && p.second !=q.second ){
                return {p.first,q.first};
            }
        }
    }
    return {-1,-1};
    }
};