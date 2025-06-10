#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template <typename T>
class SimpleVector {

private:
	T* int currentSize;
	T* int currentCapacity;
	void resize(int newCapacity);

public:
	virtual int SimpleVector(int capacity[10]) {
		 
	}

	~SimpleVector() {
	}

	void push_back(const T& arr, vector<void> capacity) {
		 arr(capacity); 
	}

	void pop_back(vector<void>) {
		arr.erase();
	}

	int size() { return arr[i]; }
	int capacity() { return arr[i].size; }
	void sortData() {}
};

int main() {

}