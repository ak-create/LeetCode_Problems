class Solution {
public:
    bool detectCapitalUse(string word) {
      
        // if(word[0]>=65&&word[0]<=90)
        //     return true;
        int l=0,r=0;
        for(int i=0;i<word.size();i++){
            if(word[i]>=97&&word[i]<=122)
                r++;
                
                if(word[i]>=65&&word[i]<=90)
                    l++;
        }
        if(l==word.size()||r==word.size()||(l==1&&word[0]>=65&&word[0]<=90))
            return true;
        
        return false;
    }
};