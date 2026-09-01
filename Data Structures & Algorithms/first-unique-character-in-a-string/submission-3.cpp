class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        unordered_map <char , int >p;
        for(int i = 0; i< n ; i++){
            if(p.contains(s[i])){
                p[s[i]]=n;
            }else{  p[s[i]] = i;}
           
        }

        int res =n;
        for(auto& [key, index] :p){
            res = min(res, index);
        }
        return res == n ? -1 :res;     
    }
};