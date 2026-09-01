class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char , int > p; 
        for (char c : s){
            p[c]++;
        }

        for(int i = 0 ;i< s.length() ;i++){
            if(p[s[i]] == 1){
                return i;
            }
        }
        return -1;
        
    }
};