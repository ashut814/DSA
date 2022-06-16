// implementation
// class MyHashSet {
// public:
// 	vector<int> m;
// 	int size;
//     MyHashSet() {
//         size = 1e6;
//         m.resize(size);

//     }

//     void add(int key) {
//         m[key] = 1;
//     }

//     void remove(int key) {
//         m[key] = 0;
//     }

//     bool contains(int key) {
//      return m[key];
//     }
// };

/* using chaining element
class MyHashSet {
public:
	vector<int> m;
	int size;
	MyHashSet() {
		size = 1e6;
		m.resize(size);

	}

	void add(int key) {
		m[key] = 1;
	}

	void remove(int key) {
		m[key] = 0;
	}

	bool contains(int key) {
		return m[key];
	}
};

*/

class MyhashSet {
	vector<list<int>> m;
	int size;
	MyhashSet()
	{
		size = 1e6 + 1;
		m.resize(size);
	}

	int hash(int key) {

	}
	list<int> :: iterator search(int key) {
		int index = hash(key);
		find(m[index].begin() , m[index].end() , key);

	}
	void add(int key) {
		if (contains(key)) return;

		int index = hash(key);
		m[index].push_back(key);
	}

	void remove(int key) {
		if (!contains(key)) return;
		int index = hash(key);
		m[index].erase(search(key));
	}

	bool contains(int key) {
		int index = hash(key);

		if (search(key) != m[index].end()) {
			return true;
		}
		return false;
	}

};