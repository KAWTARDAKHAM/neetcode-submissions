using namespace std;
#include <unordered_map>
class Solution {
public:
         
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map<string,vector<string>> m;
        int i = 0;
        for(string x : strs){
            string sorted = x;
            sort(sorted.begin() , sorted.end());
            m[sorted].push_back(x);
            
        }
        for(auto& pair : m){
            output.push_back(pair.second);
        }
        return output;    
    }
};
