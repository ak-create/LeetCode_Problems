class Solution {
public:
    bool isRobotBounded(string instructions) {
        
        int n=instructions.size();
        int u=0,d=0,l=0,r=0;
        char dir='u';
        for(int i=0;i<n;i++){
            
            if(instructions[i]=='G'){
                if(dir=='u')
                    u++;
                else if(dir=='l')
                    l++;
                else if(dir=='d')
                    d++;
                else
                    r++;
            }
            else if(instructions[i]=='L'){
                
                 if(dir=='u')
                    dir='l';
                else if(dir=='l')
                    dir='d';
                else if(dir=='d')
                    dir='r';
                else
                    dir='u';
            }
            else{
                   if(dir=='u')
                    dir='r';
                else if(dir=='l')
                    dir='u';
                else if(dir=='d')
                    dir='l';
                else
                    dir='d';
            }
            
           // cout<<"every"<<dir<<endl;
        }
       // cout<<dir<<endl;
        
        if((l==r&&u==d)||(dir!='u'))
            return true;
        else
            return false;
    }
};