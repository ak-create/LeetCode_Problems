class Solution {
public:
    string makeGood(string s) {
        int flag=1;
        while(flag)
        {
           // cout<<"y"<<" ";
            int i=0;
            flag=0;
            string g="";
            g+=s[0];
            for( i=1;i<s.size();i++)
            {
                if(s[i]-'a'==s[i-1]-'A' or s[i]-'A'==s[i-1]-'a')
                {
                    flag=1;
                   // cout<<" "<<i<<" ";
                    break;
                }  
                    
            }
            if(flag){
            // cout<<i<<" "<<s.substr(0,i-1)<<" "<<s.substr(i+1)<<endl;
            s=s.substr(0,i-1)+s.substr(i+1);
            }
           // cout<<s<<endl;
        }
            return s;
    }
};