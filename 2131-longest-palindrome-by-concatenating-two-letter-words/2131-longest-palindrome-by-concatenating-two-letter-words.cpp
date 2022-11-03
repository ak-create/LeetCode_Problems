class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int same=0;
        map<string,int>mp;
        for(auto s:words){
            mp[s]++;
        }
        int ans=same;
        for(auto it:mp)
        {
            string rev=it.first;
            reverse(rev.begin(),rev.end());
            if(rev==it.first)
            {
                ans+=((mp[it.first]/2)*4);
                if(mp[it.first]%2)
                    same=1;
            }
            else
            {
                ans+=min(mp[rev],mp[it.first])*2;
            }
       //     cout<<it.first<<" "<<it.second<<endl;
        }
//         for(int i=0;i<words.size();i++)
//         {
//             mp[words[i]]--;
//             string rev=words[i];
//             reverse(words[i].begin(),words[i].end());
//             swap(rev,words[i]);
//             if(mp.find(rev)!=mp.end())
//               {
//                    if(mp[rev]>=1)
//                    {
//                        mp[rev]--;
//                        ans+=4;
//                    }
//                 else
//                 {
//                     if(words[i][0]==words[i][1])
//                         same=1;
//                 }
//               }
            
//            else if(words[i][0]==words[i][1])
//                         same=1;
//         }
        if(same)
            ans+=2;
        
    return ans;
        
    }
};