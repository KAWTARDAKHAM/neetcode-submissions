class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){ return 0;}else{
        sort(nums.begin(),nums.end());
        int i =0;
        int len=0;
        int res=0;
        int curr = nums[0];
        while(i<nums.size()){
            if(curr != nums[i]){
                curr = nums[i];
                len = 0;
            }
            while(i<nums.size() && nums[i] == curr ){
                i++;
            }
            len++;
            curr++;
            res=max(res,len);
        }
        return res;}
        
    }
};
