class Solution {
public:
    int addDigits(int num) {
        int ans=0;
         while(num!=0&&num>9){
             int n=num;
             int res=0;
             while(n!=0){
                 res=(n%10)+res;
                 n/=10;
             }
             num=res;
         }
        return num;
    }
};