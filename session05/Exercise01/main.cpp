#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

list<double> read_istream(istream& in){
	list<double> l;
	double x;
	while (cin >> x) {
		l.push_back(x);
	}
	return l;
}

void write_ostream(ostream &out, const list<double> &l) {
	out << "The number in the list is: ";
	for (const auto& x : l) {
		out << " " << x;
	}
	out << '\n';
}


bool negativeNum(double x) {
	return x < 0;
}

/* Returns the number of elements in the range [first, last) satisfying specific criteria.
   https://en.cppreference.com/w/cpp/algorithm/count
   ================================================= */
int countNegative(const list<double>& l) {
	return count_if(l.cbegin(), l.cend(), negativeNum);
}

int countNegativeLambda(const list<double>& l) {
	return count_if(l.cbegin(), l.cend(),
		[](double x) {return x < 10; });
}


int main() {
	cout << "Please enter in a list of numbers" << '\n';
	list<double> values = read_istream(cin);
	write_ostream(cout, values);

	cout << "Exercse 1a: A function counting negative numbers: "<< countNegative(values) << '\n';
	cout << "Exercse 1b: A function counting negative numbers with 'Lambda' expression: " << countNegativeLambda(values) << '\n';

	return 0;
}

/* =======================================================
list<double> l = {-1, 0, 1};
auto exercise1a = count_if(values.cbegin(), values.cend(), negativeNum);
cout << exercise1a << '\n';
// ======================================================= */
