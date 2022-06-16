// using array
// last in first out
#include <iostream>
#include<climits>
using namespace std;

class Array {
	int *data;
	int nextIndex;
	int capacity;
public:
	Array(int Totalsize) {
		data = new int[Totalsize];
		nextIndex = 0;
		capacity = Totalsize;
	}

	// return no. of elements present
	int size() {
		return nextIndex;
	}
	// isempty or not
	bool isEmpty() {
		/*if(nextIndex == 0){
			return true;
		}
		else{
			return false;
		}*/
		// or
		return nextIndex == 0;
	}
	// insert
	void push(int element ) {
		if (nextIndex == capacity) {
			cout << "stack full" << endl;
			return;
		}
		data[nextIndex] = element;
		nextIndex++;
	}
	// delete
	int pop() {
		if (isEmpty()) {
			cout << "stak isEmpty" << endl;
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	}
	// returns topmost element
	int top() {
		if (isEmpty()) {
			return INT_MIN;
		}
		return data[nextIndex - 1];
	}
};

int main()
{
	Array s(4);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout << s.top() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.size() << endl;

	cout << s.isEmpty() << endl;

}