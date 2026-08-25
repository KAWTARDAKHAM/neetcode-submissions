using namespace std;
#include <string>
class Solution {
public:
    string encode(vector<string>& strs) {
        string output="";
        for(string s : strs){
            output+=to_string(s.length());
            output+='#';
            output+=s;
            
        }
        return output;
    }
    vector<string> decode(string s) {
        vector <string> output;
        string t="";
        int i=0;
        string number="";
        for(int i=0;i<s.length();i++){
            if(s[i] != '#'){
                number+=s[i];
            }else{
                int len = stoi(number);
                number="";
                string h = s.substr(i+1,len);
                output.push_back(h);
                i+=len;
            }
        }
        return output;
    }
};
