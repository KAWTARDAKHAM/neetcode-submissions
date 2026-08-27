class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;
        set<int> s1(nums1.begin(),nums1.end());
        set<int> S2(nums2.begin() , nums2.end());
        for(auto el : s1){
            if(S2.contains(el)){
                output.push_back(el);
            }
        }

        return output;

        
    }
};