class LRUCache {
public:
    unordered_map<int,int> values;
    unordered_map<int,list<int>::iterator >m;
    list<int> l;
    int capacity,size;
    LRUCache(int capacity) {
         this->capacity=capacity;
        size=0;
    }
    
    int get(int key) {
          if(m.find(key)==m.end()) return -1;
        auto it=m[key];
        l.erase(it);
        l.push_front(key);
        m[key]=l.begin();
        return values[key];
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()) {
            auto it=m[key];
            l.erase(it);
            l.push_front(key);
            m[key]=l.begin();
            values[key]=value;
            return;
        }
        if(size<capacity) {
            l.push_front(key);
            m[key]=l.begin();
            values[key]=value;
            size++;
            return;
        }
        auto it=l.back();
        l.pop_back();
        m.erase(it);
        values.erase(it);
        l.push_front(key);
        m[key]=l.begin();
        values[key]=value;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */