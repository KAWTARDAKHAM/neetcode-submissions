class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){return false;}
        unordered_map<char , char > match1;
        unordered_map<char, char > match2;
        for( int j = 0 ;j<s.length() ; j++){
            match1[s[j]] = ' ';
            match2[t[j]] = ' ';
        }
        for(int i =0 ; i< t.length() ; i++){
            if(match1[s[i]] == ' '){
                match1[s[i]] = t[i];
            }else if(match1[s[i]] != t[i]){
                return false;
            }

            if(match2[t[i]] == ' '){
                match2[t[i]] = s[i];
            }else if(match2[t[i]] != s[i]){
                return false;
            }
        }
        return true;      
    }
};