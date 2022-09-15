class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        multiset<int>s;
        int n=changed.size();
        vector<int>v;
        if(n%2)
            return v;
        sort(changed.begin(),changed.end());
        int mid=n/2;
        for(int i=0;i<n;i++)
        {
            //v.push_back(changed[i]);
            s.insert(changed[i]);
        }
        int flag=0;
        for(int i=n-1;i>=0;i--)
        {
            if((changed[i]%2)==0 and s.find(changed[i])!=s.end() and s.find(changed[i]/2)!=s.end()){
                s.erase(s.find(changed[i]/2));
                if(s.find(changed[i])==s.end())
                    continue;
                s.erase(s.find(changed[i]));
                v.push_back(changed[i]/2);
                flag++;
            }
            
        }
        
        //for(int i=0;i<v.size();i++)
         //   cout<<v[i]<<" ";
        if(flag!=mid)
            v.clear();
        return v;
    }
};