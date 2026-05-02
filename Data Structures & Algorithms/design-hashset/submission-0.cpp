class MyHashSet {
private:
    int size;
     vector<list<int>> table;
    //return hash value
    int hashFunction(int key) {
        return abs(key) % size;
    }
public:
    MyHashSet() {
        size=10;
        this->size = size;

        table = vector<list<int>>(size);
    }
    
    void add(int key) {
        
        int index = hashFunction(key);

        // tránh duplicate
        for(int x : table[index]) {

            if(x == key)
                return;
        }

        table[index].push_back(key);
    }
    
    void remove(int key) {
         int index = hashFunction(key);

        table[index].remove(key);
    }
    
    bool contains(int key) {
        int index = hashFunction(key);

        for(int x : table[index]) {

            if(x == key)
                return true;
    }  return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */