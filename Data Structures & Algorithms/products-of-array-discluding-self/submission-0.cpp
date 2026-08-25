class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> output;
        int len = nums.size();
        int* suffix= new int[len];
        int* prefix= new int[len];
        prefix[0] = 1;
        suffix[len - 1] = 1;
        
        for(int i = 1 ;i<len; i++){
            prefix[i] = prefix[i-1]*nums[i-1] ;
        }
        for(int j = (len -2) ; j>=0;j--){
            suffix[j] = suffix[j+1]* nums[j+1];
        }
        for(int i = 0;i<len;i++){
            output.push_back(prefix[i]*suffix[i]);
        }
        return output;
    }
};
