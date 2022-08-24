class Solution {
public:
    bool isPowerOfThree(int n) {
       if(n==0)
           return false;
        return n>0 and pow(3.0,((int)(log10(n)/log10(3))))==n;
    }
};