#ifndef ITEM_H
#define ITEM_H

#include <string>

class item{
	std::string desc;
	int value;

public:
	item(const std::string& d, int v) : desc(d), value(v) {}

	const std::string& desc() const { return desc; }
	int value() const { return value; }

};
#endif