#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

vector<string> read_vector(istream& in) {
	vector<string> v;
	string x;
	while (cin >> x)
		v.push_back(x);
	return v;
}


/* Write a program that reads some text from the standard input
and then prints out the longest word in the input. (You shouldn’t
need to retain all the words to do this. */


// the longest string in a vector
// requires: v.size() > 0
const string& longest(const vector<string>& v) {
	const auto n = v.size();
	if (n == 0)
		throw domain_error("longest of an empty vector");

	typedef vector<double>::size_type vec_size;
	vec_size best = 0;
	for (vec_size i = 1; i < n; ++i)
		if (v[i].size() > v[best].size())
			best = i;
	return v[best];
}



int main() {
	cout << "Please enter a series of text: " << '\n';
	const auto values = read_vector(cin);
	cout << "Longest wrod from the text provided is: " << longest(values) << '\n';

	return 0;
}

