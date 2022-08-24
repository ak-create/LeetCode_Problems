class Solution {
public:
    bool isPowerOfThree(int n) {
        set<long long int>s;
        for(int i=0;i<=30 and pow(3.0,i)<pow(2.0,31);i++)
        {
            s.insert(pow(3.0,i));
        }
        if(s.find(n)!=s.end())
            return true;
        
        return false;
    }
};