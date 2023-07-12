#include <iostream>
#include <map>
#include <string>

using namespace std;

typedef string::size_type vec_size;

// length of the longest key in the map
vec_size longest_key(const map<string, int>& m) {
	vec_size max = 0;
	for (const auto& p : m)
		if (p.first.size() > max)
			max = p.first.size();
	return max;
}

// right-align the string in n cells
void pad(const string& s, vec_size n) {
	for (vec_size i = s.size(); i < n; ++i)
		cout << " ";
	cout << s;
}

// print n asterisks
void stars(int n) {
	for (int i = 0; i < n; ++i)
		cout << " * ";
}

int main() {
	// count of occurrences of each word in the input
	map<string, int> count;

	// read input words, updating their counts
	string w;
	while (cin >> w)
		++count[w];
	auto width = longest_key(count);

	// write each word and its number of occurrences
	for (const auto& p : count) {
		pad(p.first, width);
		cout << " ";
		stars(p.second);
		cout << '\n';
	}

	return 0;
}
