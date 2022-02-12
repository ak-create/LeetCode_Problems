class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
         bool isPersent=false;
        set<string>Words;
        for(int i=0;i<wordList.size();i++){
            if(endWord==wordList[i])
                isPersent=true;
            Words.insert(wordList[i]);
        }
        if(!isPersent)
            return 0;
        else{
            int depth=0;
            queue<string>q;
            q.push(beginWord);
            while(!q.empty()){
                depth++;
                int len=q.size();
                while(len--){
                    string temp=q.front();
                    q.pop();
                    for(int i=0;i<temp.size();i++){
                        string chk=temp;
                        for(char j='a';j<='z';j++)
                        {
                            chk[i]=j;
                            if(Words.count(chk)){
                                if(chk==endWord)
                                    return depth+1;
                                
                                q.push(chk);
                                Words.erase(chk);
                            }
                        }
                    }
                }
           
            }
        }
  return 0;}
};