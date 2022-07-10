class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int x:nums1)
            v.push_back(x);
        for(int x:nums2)
            v.push_back(x);
        sort(v.begin(),v.end());
        
        double ans=0;
        if(v.size()%2==1)
            return v[(v.size()-1)/2];
        else{
            ans=v[(v.size()-1)/2]+v[v.size()/2];
            return ans/2;
        }
            // v[(v.size())]
    }
};