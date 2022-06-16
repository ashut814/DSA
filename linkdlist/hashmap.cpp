/*class MyHashMap {
public:
    vector<int> m;
    int size;
    MyHashMap() {
        size = 1e6+1;
        m.resize(size);
        fill(m.begin(),m.end(),-1);
    }

    void put(int key, int value) {
        m[key] = value;
    }

    int get(int key) {
        return m[key];
    }

    void remove(int key) {
        m[key] = -1;
    }
};*/


class MyHashMap {
public:
	vector<list<pair<int, int>>>m;
	int size;
	MyHashMap() {
		size = 1e6 + 1;
		m.resize(size);
	}

	int hash(int key) {
		return key % size;
	}
	list<pair<int, int>> :: iterator search(int key) {
		int index = hash(key);
		list<pair<int, int>> :: iterator it = m[index].begin();
		while (it !=  m[index].end()) {
			if (it->first == key) {
				return it;
			}
			return it;
			it++;
		}
	}
	void put(int key, int value) {
		int index = hash(key);
		remove(key);
		m[index].push_back({key, value});
	}

	int get(int key) {
		int index = hash(key);
		list<pair<int, int>> :: iterator it = search(key);
		if (it == m[index].end()) return -1;

		return  it->second;
	}

	void remove(int key) {
		int index = hash(key);
		list<pair<int, int>> :: iterator it = search(key);
		if (it != m[index].end()) m[index].erase(it);

	}
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */