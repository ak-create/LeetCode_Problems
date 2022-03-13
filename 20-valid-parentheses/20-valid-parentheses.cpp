class Solution {
public:
    
    bool isok(char c, vector<char>&v1){
        if(v1.size()==0)
            return false;
       // cout<<"c:"<<c<<" "<<v1.back()<<endl;
        if(c==')'&&v1.back()=='('){
            v1.pop_back();
            return true;
        }
         else if(c==']'&&v1.back()=='['){
            v1.pop_back();
            return true;
        }
         else if(c=='}'&&v1.back()=='{'){
            v1.pop_back();
            return true;
        }
        else
        return false;
    }
    
    bool isValid(string s) {
      stack<char>st1,st2;
        vector<char>v1,v2;
        for(int i=0;i<s.size();i++){
          //  cout<<"s:"<<s[i]<<endl;
           if(s[i]=='('||s[i]=='{'||s[i]=='['){
               //st1.push(s[i]);
               v1.push_back(s[i]);
           }
            else{
                if(isok(s[i],v1)==false)
                    return false;
            }
        }
        if(v1.size()==0)
  return true;    
        else
            return false;
        }
        
};