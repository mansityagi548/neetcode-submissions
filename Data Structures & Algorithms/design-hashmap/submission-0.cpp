class MyHashMap {
   public:
    vector<vector<pair<int, int>>> bucket;
    int size = 1000;

    MyHashMap() { bucket.resize(size); }

    int hashIndex(int key) { return key % size; }

    void put(int key, int value) {
        int index = hashIndex(key);
        for (auto& x : bucket[index]) {
            if (x.first == key) {
                x.second = value;
                return;
            }
        }

        bucket[index].emplace_back(key, value);
    }

    int get(int key) {
        int index = hashIndex(key);
        for (auto& x : bucket[index]) {
            if (x.first == key) {
                return x.second;
            }
        }

        return -1;
    }

    void remove(int key) {
        int index = hashIndex(key);
        auto& vec = bucket[index];
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i].first == key) {
                vec.erase(vec.begin() + i);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */