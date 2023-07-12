#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

list<double> read_istream(istream& in) {
	list<double> vs;
	double x;
	while (cin >> x) {
		vs.push_back(x);
	}
	return vs;
}

void write_ostream(ostream& out, const list<double>& vs) {
	out << "list: ";
	for (const auto& x : vs) {
		out << " " << x;
	}
	out << '\n';
}

void delete_first_zero(list<double>& vs) {
	auto i = vs.cbegin();
	while (i != vs.cend()) {
		if (*i == 0) {
			i = vs.erase(i);
			return;
		}
		++i;
	}
}


int main() {
	cout << "Please enter a series of numbers" << '\n';
	list<double> values = read_istream(cin);
	write_ostream(cout, values);

	delete_first_zero(values);
	write_ostream(cout, values);

	return 0;
}