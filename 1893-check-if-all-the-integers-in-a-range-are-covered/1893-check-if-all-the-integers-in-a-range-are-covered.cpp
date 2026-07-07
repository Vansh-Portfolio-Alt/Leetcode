class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
      for(int i=left;i<=right;i++){
           int k=0;
           for(vector<int> j: ranges){
            if(j[0]<=i && i<=j[1])k=1;
           }
           if(k==0)return 0;
      }  return 1;
    }
};