class Solution {
public:
    int numDecodings(string s) {
        /*
        101011 --> 0  1  2  3  4 5 
                   1  1  1  1  1 2
                   
         256---->  0  1  2          
                   1  2  
                   pre=1
                   curr=2
        */
        int n=s.size();
        int prev1=((s[0]-'0')==0)?0:1;
        int curr=0;
        int ans=prev1;
        if(ans==0)
            return 0;
        if(n>1){
            ans=0;
         curr=((s[1]-'0')==0)?0:1;
            int comb2=(s[0]-'0')*10+(s[1]-'0');
                if((s[0]-'0')!=0&&comb2<=26)
                   ans+=prev1;
               if(((s[1]-'0')!=0)&&prev1>0)
                   ans+=curr;
        }
        
        prev1=curr;
        curr=ans;
        for(int i=2;i<n;i++){
            // if((s[i-1]-'0')==0)
            //     curr+=0;
            // else{
            ans=0;
                int comb2=(s[i-1]-'0')*10+(s[i]-'0');
                if((s[i-1]-'0')!=0&&comb2<=26)
                   ans+=prev1;
               if(((s[i]-'0')!=0))
                   ans+=curr;
            

            prev1=curr;
            curr=ans;
        }
        return ans;
            
    }
};