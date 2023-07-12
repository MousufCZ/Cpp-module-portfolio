#include <iostream>
#include <list>
#include <algorithm>
#include <stdexcept>

using namespace std;

// read numbers from the standard input
// and store them in a vector
list<double> read_list(istream& in) {
	list<double> v;
	double x;
	while (cin >> x)
		v.push_back(x);
	return v;
}


// Average of the values in the vector
// requires:	call copy of vector if it has more then 1 value in it
//				v.size() > 0
double average(const list<double>& v) {
	// Throw error if vector is empty
	const auto n = v.size();
	double sum = 0;

	if (n == 0) {
		throw domain_error("The vector is empty");
	}

	typedef list<double>::size_type list_size;
	// auto i = v.cbegin(); i != v.cend(); ++i
	for (auto i : v)
		sum += i;
	return sum / n;
}


int main() {
	cout << "Please enter a series of numbers\n";
	//const auto values = read_vector(cin);
	list<double> values = read_list(cin);

	// compute and output results
	const auto n = values.size();
	cout << n << " numbers in the list.\n";


	if (n > 0) {
		// compute the average
		cout << "average = " << average(values) << '\n';
	}
	return 0;
}