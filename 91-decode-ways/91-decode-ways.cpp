class Solution {
public:
int dp[100];

int decode(string &s, int len, int idx)
{
    int cnt = 0;

    if (idx == len) {
        return 1;
    }
    
    if (dp[idx] != -1) {
        return dp[idx];
    }
    
    if (s[idx] != '0') {

        /* For single digit */
        if (s[idx] <= '9') {
            cnt += decode(s, len, idx + 1);
        }
        
        /* For 2 digits */
        if (idx + 1 < len) {
            if (s[idx] == '1' && s[idx + 1] <= '9') {
                cnt += decode(s, len, idx + 2);
            }
            else if (s[idx] == '2' && s[idx + 1] <= '6') {
                cnt += decode(s, len, idx + 2);
            }
        }
    }
    
    dp[idx] = cnt;
    
    return cnt;
}

int numDecodings(string s){
    /*
     * Input:
     *  s, string contains encoded data
     */
     
    int len = s.size();

    for (int i = 0; i < len; i++) {
        dp[i] = -1;
    }
     
    /*
     * Output:
     *  Given a string s containing only digits, return 
     *  the number of ways to decode it.
     */
     
    return decode(s, len, 0);
}
};