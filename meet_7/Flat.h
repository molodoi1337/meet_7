#pragma once
#include <iostream>
using namespace std;

class Flat {
	unsigned squer�;
public:
	Flat(unsigned a) {
		squer� = a;
	}
	void operator==(Flat& o) {
		if (squer� == o.squer�) cout << true; //1-true,0-false
		else cout << false;
	}
	Flat operator=(Flat& o) {
		squer� = o.squer�;
		return squer�;
	}
	void operator>(Flat& o) {
		if (squer� > o.squer�) cout << '>';
		else if (squer� < o.squer�) cout << '<';
		else cout << '=';
	}

	void Show() {
		cout << squer�;
	}

	friend ostream& operator<<(ostream& out, Flat& a) {
		out << a.squer�;
		return out;
	}
};
