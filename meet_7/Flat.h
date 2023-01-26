#pragma once
#include <iostream>
using namespace std;

class Flat {
	unsigned squerå;
public:
	Flat(unsigned a) {
		squerå = a;
	}
	void operator==(Flat& o) {
		if (squerå == o.squerå) cout << true; //1-true,0-false
		else cout << false;
	}
	Flat operator=(Flat& o) {
		squerå = o.squerå;
		return squerå;
	}
	void operator>(Flat& o) {
		if (squerå > o.squerå) cout << '>';
		else if (squerå < o.squerå) cout << '<';
		else cout << '=';
	}

	void Show() {
		cout << squerå;
	}

	friend ostream& operator<<(ostream& out, Flat& a) {
		out << a.squerå;
		return out;
	}
};
