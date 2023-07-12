#include "stats.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

vector<double> read_vector(istream &in) {
	vector<double> v;
	double x;
	while (in >> x) {
		v.push_back(x);
	}
	return v;
}

void write_vector(ostream &out, const vector<double> &v) {
	out << "Vector:";
	for (auto p = v.cbegin(); p != v.cend(); ++p) {
		out << ' ' << *p;
	}
	out << '\n';
}

int main() {
	map<string, vector<double>> values;
	
	string s;
	double x;

	while (cin >> s >> x) {
		values[s].push_back(x);
	}

	for (const auto &p : values) {
		cout << p.first << " " << average(p.second) << '\n';
	}

	return 0;
}

