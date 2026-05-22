class MyHashSet {
   public:
    vector<vector<int>> vec;
    int size = 1000;

    MyHashSet() { vec.resize(size); }

    int hashIndex(int key) { return key % size; }

    void add(int key) {
        int index = hashIndex(key);
        for (int x : vec[index]) {
            if (x == key) return;
        }

        vec[index].push_back(key);
    }

    void remove(int key) {
        int index = hashIndex(key);
        auto& bucket = vec[index];
        for (int i = 0; i < bucket.size(); i++) {
            if (bucket[i] == key) {
                bucket.erase(bucket.begin() + i);
                return;
            }
        }
    }

    bool contains(int key) {
        int index = hashIndex(key);
        for (int x : vec[index]) {
            if (x == key) return true;
        }

        return false;
    }
};
/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */