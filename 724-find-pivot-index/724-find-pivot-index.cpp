class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        
        int n = arr.size();
        int ls = 0;
        int rs = 0;
        int prefixSum = 0;
        
        for(int i = 0; i < n; i++){
            prefixSum += arr[i]; 
        }
        
        rs = prefixSum;
        
        for(int i = 0; i < n; i++){
            ls += arr[i];
        
            if(ls == rs){
                return i;
            }
            else{
            rs -= arr[i];
            }
        }
        
        
        return -1;
    }
};