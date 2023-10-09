
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
	~object(){
		std::cout << "object has deleted"<<"\n";
	}
	object() {
		data = 0;
	}
	int get() {
		return data;
	}
	void display() {
		std::cout << data<<"\n";
	}
};

template<typename T>
class SP {
	T* p;
	int count;
public:
	SP(T* temp) {
		count = 0;
		p = temp;
	}
	SP(const SP& temp) {
		p = temp.p;
		count++;
	}
	~SP() {
		if (count == 0) {
			delete p;
		}
		else {
			count--;
		}
	}
	SP operator =(const SP& temp) {
		p = temp.p;
		count++;
		return *this;
	}
	T* operator->() {
		return p;
	}
	T& operator*() {
		return *p;
	}


};