class Solution {
public:
    string removeKdigits(string s, int k) {
       int sz = 0;
       for (size_t i = 0; i < s.size(); ++i) {
           char c = s[i];
           while (sz > 0 && s[sz-1] > c && k > 0) {
               --sz;
               --k;
           }
           if (sz > 0 || c != '0') s[sz++] = c;
       }
       sz = max(sz - k, 0);
       s.resize(sz);
       return sz == 0 ? "0" : s;
    }
};