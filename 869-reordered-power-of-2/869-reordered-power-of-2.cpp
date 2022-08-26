class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<int>v;
        while(n>0)
        {
            v.push_back(n%10);
            n/=10;
        }
        sort(v.begin(),v.end());
        do{
           long long int temp=0,d=1;
            for(int i=0;i<v.size();i++)
            {
                temp=temp*10+v[i];
                //d*=10;
            }
          //  cout<<temp<<endl;
            if(v[0]!=0 and (pow(2.0,int(log10(temp)/log10(2))))==temp){
                //cout<<temp<<" "<<log10(temp)/log10(2)<<endl;
                return true;}
        }while(next_permutation(v.begin(),v.end()));
        
        return false;
    }
};