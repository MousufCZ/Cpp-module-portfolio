#ifndef ROBOT_H
#define ROBOT_H

#include <vector>

/* ======================================
* Assign class robot attributes
* =====================================*/

class robot {
	int _id;
	int _team;
	int _xpos;
	int _ypos;
	int _distance;

public:
	// Initialise variables
	robot(int& n, int& t, int& x, int& y, int) :
		_id(n), _team(t), _xpos(x), _ypos(y), _distance(0) {}


	// Accessor function
	const int &id() const { return _id; }
	const int &team() const { return _team; }
	const int &xpos() const { return _xpos; }
	const int &ypos() const { return _ypos; }
	const int &distance() const { return _distance; }
};



#endif