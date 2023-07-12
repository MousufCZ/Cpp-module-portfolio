#include "stats.h"
#include <vector>
#include <stdexcept>

using namespace std;

double average(const vector<double>& v) {
	if (v.size() == 0) {
		throw domain_error("Vector is empty");
	}

	double sum = 0;

	for (auto p = v.cbegin(); p != v.cend(); ++p) {
		sum += *p;
	}
	return sum / v.size();
}
