class LRUCache {
public:
    int capacity;
    list<int>keys; //stores only keys
    unordered_map<int,int>mp; // stores keys and values.
    
    
    LRUCache(int capacity) {
        this->capacity=capacity;
    }
    
    int get(int key) {
         if(mp.find(key) == mp.end() ) return -1;
        
        else{
            keys.remove(key);
            keys.push_back(key);
            return mp[key];
        }
        
    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end() ){
            mp.erase(key);
            keys.remove(key);
