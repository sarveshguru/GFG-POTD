// User function template for C++
class Solution {
  public:
    // Returns maximum repeating element in arr[0..n-1].
    // The array elements are in range from 0 to k-1
    int maxRepeating(int k, vector<int>& arr) {
        // code here
        map<int, int> fq;
        
        for(int i = 0; i < arr.size(); i++){
            fq[arr[i]]++;
        }
        
        int mxfq = 0;
        int mxn = -1;
        
        for(const auto& pair : fq){
            if(pair.second > mxfq){
                mxfq = pair.second;
                mxn = pair.first;
            }
        }
        
        return mxn;
    }
};