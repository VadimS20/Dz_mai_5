#pragma once

#include <iostream>

class object {
	int data;
public:
	object(int d) {
		data = d;
	}
	object(const object& temp) {
		data = temp.data;
	}
	~object() {
		std::cout << "object has deleted" << "\n";
	}
	object() {
		data = 0;
	}
	int get() {
		return data;
	}
	void display() {
		std::cout << data << "\n";
	}
};

template<typename T>
class SP {
	T* p;
	int* count;
public:
	SP(T* temp) {
		count = new int;
		*count = 0;
		p = temp;
	}
	SP(const SP& temp1) {
		count = temp1.count;
		p = temp1.p;
		*count++;
	}
	~SP() {
		if (*count == 0) {
			
			delete count;
			delete p;
			std::cout << "counter has deleted\n";
		}
		else {
			*count--;
		}
	}
	SP operator =(const SP& temp) {
		//this->p = temp.p;
		return *this;
	}
	T* operator->() {
		return p;
	}
	T& operator*() {
		return *p;
	}


};
