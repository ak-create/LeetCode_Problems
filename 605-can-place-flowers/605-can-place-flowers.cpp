class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         if(n==0)
            return true;
        
        if(n>(flowerbed.size()+1)/2)
            return false;
         
        int cnt=0;
        if(flowerbed.size()>=2){
            if(flowerbed[0]+flowerbed[1]==0){
           cnt++;
            flowerbed[0]=1;}
        }
       
        if(flowerbed.size()>=3){
        for(int i=1;i<flowerbed.size()-1;i++){
            if(i-1>=0&&i+1<flowerbed.size()){
            if(flowerbed[i-1]+flowerbed[i]+flowerbed[i+1]==0){
                cnt++;
                flowerbed[i]=1;
            }
            }
            
        }
    }
                if(flowerbed.size()>=2){
        if(flowerbed[flowerbed.size()-1]+flowerbed[flowerbed.size()-2]==0)
        {
            cnt++;
            flowerbed[flowerbed.size()-1]=1;
        }
                }
        
        if(flowerbed.size()==1){
            if(flowerbed[0]==0)
                cnt++;
        }
        if(cnt>=n)
            return true;
        
        return false;
    }
};