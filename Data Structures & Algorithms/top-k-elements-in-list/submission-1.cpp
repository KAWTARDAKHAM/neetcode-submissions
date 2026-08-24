using namespace std;
#include <unordered_map>
class Solution {
public:
    static bool cmp(pair<int,int>&a,
             pair<int,int>&b){
                return a.second>b.second;
             }

    vector<pair<int,int>> sorting(unordered_map<int,int>& l){
        vector<pair<int,int>> k;
        for(auto& n : l){
            k.push_back(n);
        }
        sort(k.begin(),k.end(),cmp);
        return k;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> p;
        vector<int> output;
        for(int a : nums){
                p[a]++;
            }
        vector<pair<int,int>> h = sorting(p);
        for(int i=0;i<k;i++){
            output.push_back(h[i].first);

        }
        return output;
    }
};
