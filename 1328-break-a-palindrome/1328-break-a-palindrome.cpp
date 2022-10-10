class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.size();
        int i=0,j=n-1;
        if(n==1)
            return "";
        while(i<j)
        {
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                return palindrome;
            }
            i++;
            j--;
        }
       
            palindrome[n-1]='b';
            
        return palindrome;
    
            
    }
};