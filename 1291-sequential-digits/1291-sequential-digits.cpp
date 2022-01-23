class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<string>hold;
        char i='1';
        // while(i<='8'){
        //     string s="";
        //     s+=i;
        //     hold.push_back(s);
        //     i=i+'1';
        // }
        // i='1';
        while(i<='9'){
            char j=(i+1);
           // cout<<"j:"<<j<<endl;
            string s="";
            s.push_back(i);
           // hold.push_back(s);
            while(j<='9'){
               
                s.push_back(j);
                 hold.push_back(s);
            j=j+1;}
            
            i=i+1;
        }
        // sort(hold.begin(),hold.end());
        // for(int i=0;i<hold.size();i++)
        //     cout<<hold[i]<<endl;
        
        vector<int>ans;
        for(int i=0;i<hold.size();i++){
            int x=stoi(hold[i]);
            if(x>=low&&x<=high)
                ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};