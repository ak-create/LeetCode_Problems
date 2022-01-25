class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int ind=-1;
        int mx=-1;
        for(int i=0;i<arr.size();i++){
            if(mx<arr[i]){
                mx=arr[i];
                ind=i;
            }
        }
        int cntl=0,cntr=0;
        for(int i=ind-1;i>=0;i--){
            if(arr[i]<arr[i+1])
                cntl++;
        }
        for(int i=ind+1;i<arr.size();i++){
            if(arr[i]<arr[i-1])
                cntr++;
        }
        if(cntl+cntr==arr.size()-1&&cntl>0&&cntr>0)
            return true;
        return false;
    }
};