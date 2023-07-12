#include <iostream>
#include <list>

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

void remdups(list<double>& ws) {
	if (ws.size() > 0) {
		auto i = ws.cbegin();
		double last = *i;
		++i;
		while (i != ws.cend()) {
			if (*i == last)
				i = ws.erase(i);
			else {
				last = *i;
				++i;
			}
		}
	}

}

int main() {
	cout << "Please enter a series of numbers" << '\n';
	list<double> values = read_istream(cin);
	write_ostream(cout, values);

	remdups(values);
	write_ostream(cout, values);

	return 0;
}