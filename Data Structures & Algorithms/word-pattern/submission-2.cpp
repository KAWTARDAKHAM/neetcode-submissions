class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char , string >PS;
        unordered_map<string , char>SP;
        vector <string > st;
        int i = 0;
        string t ="";
        while(i< s.length()){
            if(s[i] != ' ' ){
                t+=s[i];
            }else {
                st.push_back(t);
                t="";
            }
            i++;
        }
        if (!t.empty()) {
            st.push_back(t);
        }

        if(st.size() != pattern.size()){
            return false;
        }

        for(int i = 0; i<pattern.size() ; i++){
            char c = pattern[i];
            string h = st[i];
            if((PS.count(c) && PS[c] != h) || (SP.count(h) && SP[h] != c )){
                return false;
            }
            PS[c] = h;
            SP[h] = c;
        }
        return true;     
    }
};