#include <iostream>
#include <list>

using namespace std;

list<double> read_istream(istream& in) {
	list<double> v;
	double x;
	while (cin >> x) {
		v.push_back(x);
	}
	return v;
}

void write_ostream(ostream& out, const list<double>& v) {
	out << " List of doubles are: ";
	for (const auto& x : v) {
		out << " " << x;
	}
	out << '\n';
}

void scale(double s, list<double>& vs) {
	// auto i = vs.begin(); i != vs.end(); i++
	for (auto& i : vs){
		i *= s;
	}
}

int main() {
	cout << "Please enter a series of numbers: " << '/n';
	list<double> values = read_istream(cin);
	write_ostream(cout, values);
	scale(5, values);
	write_ostream(cout, values);

	return 0;
}