using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for (int i=0;i<size(nums);i++){
            s.insert(nums[i]);
        }
        size_t len=s.size();
        if(size(nums)== int(len)){
            return false;
        }else{
            return true;
        }    
    }
};