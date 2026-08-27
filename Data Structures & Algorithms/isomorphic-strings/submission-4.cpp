class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){return false;}
        unordered_map<char , char > match1;
        unordered_map<char, char > match2;
        for(int i =0 ; i< t.size() ; i++){
            char j = s[i];
            char m = t[i];
           
            if((match1.count(j) && match1[j] != m) || 
                (match2.count(m) && match2[m] != j)){
                return false;
            }

            match1[j] = m;
            match2[m] = j;
        }
        return true;      
    }
};