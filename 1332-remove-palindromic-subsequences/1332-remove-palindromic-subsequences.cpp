class Solution {
public:
    int removePalindromeSub(string s) {
        string p=s;
        reverse(p.begin(),p.end());
        if(s!=p)
            return 2;
        else
            return 1;
    }
};