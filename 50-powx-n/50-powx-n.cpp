class Solution {
public:
    
   double  mynegpow(double x,long long n){
        if(n==0)
            return 1;
        double ans=mypospow(x,n/2);
        if(n%2==0){
            return (1/(ans*ans));
        }
        else{
            return (1/(x*ans*ans));
        }
    }
    
    
 double  mypospow(double x,long long n){
        if(n==0)
            return 1;
        double ans=mypospow(x,n/2);
        if(n%2==0){
            return ans*ans;
        }
        else{
            return x*ans*ans;
        }
    }
    
    double myPow(double x, int n) {
        long long N=n;
        if(n>=0){
            return mypospow(x,N);
        }
        else{
            return 1/mypospow(x,-N);
        }
        
    }
};