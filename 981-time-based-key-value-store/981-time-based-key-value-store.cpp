class TimeMap {
public:
    map<string,map<int,string>>time_keys;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        time_keys[key][timestamp]=(value);
    }
    
    string get(string key, int timestamp) {
        string ans="";
        if(time_keys.find(key)==time_keys.end())
            return ans;
        else
        {
            auto it=time_keys[key].lower_bound(timestamp);
            if(it!=time_keys[key].end() and timestamp==(*it).first)
                return (*it).second;
            else
            {
                if(it==time_keys[key].begin())
                return "";
                it--;
                return (*it).second;
            }
        }
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */