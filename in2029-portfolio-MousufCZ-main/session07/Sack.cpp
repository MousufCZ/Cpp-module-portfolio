#include "sack.h"
#include "item.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void sack::add(const item& i) {
	items.push_back(i);
}

int sack::total() const {
	int sum = 0;
	for (const auto& i : items) {
		sum += i.value();
	}
}

bool sack::search(const std::string& d) const {
	for (const auto& i : items) {
		if (i.desc() == d)
			return true;
		return false;
	}
}