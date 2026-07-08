class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());int sum=0;
        int k=arr.size()*0.05;
        for(int i=k;i<arr.size()-k;i++){
            sum+=arr[i];
        }cout<<sum<<' '<<k<<' '<<arr.size();
        return sum*1.0/(arr.size()-2*k);
    }
};