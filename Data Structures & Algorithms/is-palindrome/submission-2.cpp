class Solution {
public:
    bool isPalindrome(string s) {
        string sl = "";
        for(int i=0;i<s.length();i++){
            sl += tolower(s[i]);
        }
        
        string res = "";
        for(int i=0;i<s.length();i++){
            if((sl[i]>=97 && sl[i]<=122) || (sl[i]>='0' && sl[i]<='9')) res += sl[i];
        }

        string reres = res;
        reverse(reres.begin(),reres.end());
        if(reres==res) return true;
        else return false;
    }
};
