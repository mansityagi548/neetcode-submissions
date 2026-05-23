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
        for (int i = 0; i < vec[index].size(); i++) {
            if (vec[index][i] == key) {
                vec[index].erase(vec[index].begin() + i);
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
