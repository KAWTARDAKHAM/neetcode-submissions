class Solution {
public:
    static bool cmp(pair<int,int>& a,pair<int,int>& b){
        if(a.second>b.second){
            return true;
        }else{
            return false;
        }
    }
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i =0 ; i< nums.size() ; i++){
                freq[nums[i]]++;  
        }
        vector<pair<int,int>> p;
        for(auto& it : freq){
            p.push_back({it.first,it.second});
        }
        sort(p.begin(),p.end(),cmp);
        return p[0].first;
        

    }
};