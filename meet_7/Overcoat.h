#pragma once
#include <iostream>
using namespace std;

class Overcoat {
	string type;
public:
	Overcoat(string T) {
		type = T;
	}

	void operator==(Overcoat&o) {
		if (type == o.type) cout<< true; //1-true,0-false
		else cout<< false;
	}
	Overcoat operator=(Overcoat& o) {
		type = o.type;
		return type;
	}
	void operator>(Overcoat& o) {
		if (type > o.type) cout<<'>';
		else if (type < o.type) cout<<'<';
		else cout<< '=';
	}

	void Show() {
		cout << type;
	}

	friend ostream& operator<<(ostream&out,Overcoat& a) {
		out << a.type;
		return out;
	}
};

