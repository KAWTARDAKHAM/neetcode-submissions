class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> Result;
        for(int i=0;i<size(nums);i++){
            int remain = target-nums[i];
            for(int j=i+1;j<size(nums);j++){
                if(nums[j] == remain){
                    Result.push_back(i);
                    Result.push_back(j);
                    return Result;
                }
            }


        }
        
    }
};
