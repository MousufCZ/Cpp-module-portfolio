#include <iostream>
#include <list>
#include <algorithm>

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
	out << "list: ";
	for (const auto& x : v) {
		out << " " << x;
	}
	out << '\n';
}

double maximum(const list<double>& v) {
	if (v.size() == 0)
		throw domain_error("median of an empty vector");
	auto p = v.cbegin();
	double largest = *p;
	++p;
	while (p != v.cend()) {
		if (*p > largest)
			largest = *p;
		++p;
	}
	return largest;
}


int main() {
	cout << "Please enter a series of numbers" << '\n';
	list<double> values = read_istream(cin);
	write_ostream(cout, values);

	cout << "Largest number in the list is: " << maximum(values);
	
	return 0;
}