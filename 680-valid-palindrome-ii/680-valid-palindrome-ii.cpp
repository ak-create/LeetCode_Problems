class Solution {
public:
    bool pal(string &s,int l,int r)
    {
        
        while(l<=r)
        {
            if(s[l]!=s[r])
                return false;
            
            l++;r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
       int i=0;
        int j=s.size()-1;
        int l=0,r=0;
        while(i<=j)
        {
            if(s[i]!=s[j]){
                if(!(pal(s,i,j-1)||pal(s,i+1,j)))
                    return false;
                else
                    return true;
            }
            i++;j--;
        }
        return true;
    }
};