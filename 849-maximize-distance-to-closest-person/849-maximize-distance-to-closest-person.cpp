class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        // int pre[seats.size()];
        // int suff[seats.size()];
        // int mn=INT_MIN;
        int n=seats.size();
        set<int>st;
        for(int i=0;i<seats.size();i++){
            if(seats[i]){
                st.insert(i);
            }
           
        }
//         mn=INT_MAX;
//         for(int i=seats.size()-1;i>=0;i--){
//             if(seats[i]==1)
//                 mn=i;
//             else
//                 suff[i]=mn;
//         }
        
//         int ans=0;
//         for(int i=0;i<seats.size();i++){
//             if(seats[i]==0){
//                 ans=max(ans,max(pre[i]-i,))
//             }
//         }
        
        auto it=st.begin();
        int pref=0;
        int res=0;
        int r=0;
        while(it!=st.end()){
            if(r==0){
                res=max(res,(*it));
              //  cout<<res<<endl;
                r=1;
            }
            else{
                //cout<<pref<<" "<<*it<<endl;
            res=max(res,((*it)-pref)/2);
            }
            
            pref=*it;
            it++;
        }
          res=max(res,(n-1-pref));
        
        return res;
        
    }
};