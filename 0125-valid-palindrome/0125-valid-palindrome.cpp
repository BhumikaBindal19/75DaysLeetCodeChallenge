class Solution {
public:
    bool isPalindrome(string s) {
        string a= "";
        for(int i= s.length()-1 ;i>=0 ;i--){
            if(isupper(s[i])) a+= tolower(s[i]);
            else if(isalnum(s[i])) a+= s[i];
        } 
        string b= a;
        reverse(a.begin(), a.end());
        return (a==b);
    }
};