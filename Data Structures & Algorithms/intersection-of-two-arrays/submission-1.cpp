class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        for(auto& el : nums1){
            if(binary_search(nums2.begin() , nums2.end() , el) and (std::ranges::contains(output,el) == false)){
                output.push_back(el);
            }
        }
        return output;
    }
};