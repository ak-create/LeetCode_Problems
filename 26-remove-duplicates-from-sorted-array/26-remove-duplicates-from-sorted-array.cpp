class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n=a.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            
            while(j<n and a[j]==a[i])
                j++;
            a[cnt]=a[i];
            cnt++;
            i=j-1;
        }
        return cnt;
    }
};