// create pair class of int , int

#include <iostream>
using namespace std;

class pair {
	int x;
	int y;
public:
	void setX(int x) {
		this -> x = x;
	}
	int getX() {
		return x;
	}
	void setY(int y) {
		this->y = y;
	}
	int getY() {
		return y;
	}
};

// similarly create pair double class