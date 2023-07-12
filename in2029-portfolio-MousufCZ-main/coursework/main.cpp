#include "robot.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


/* ======================================
*  ======================================
* Task 1 - Function
* == Show ==
* The program should print to the standard output the current positions of all the robots still in the system,
* in the same format as start.txt above, but in ascending order of robot number.
* =====================================*/

void show(const robot &r) {
    cout << r.id() << " " << r.team() << " " << r.xpos() << " " << r.ypos() << " " << r.distance();
    cout << '\n';
}


/* ======================================
* Task 1 -- Supporting function
* == Split String ==
* The program should print to the standard output the current positions of all the robots still in the system,
* in the same format as start.txt above, but in ascending order of robot number.
* =====================================*/

vector<string> split_string(const string& s) {
    auto space = find(s.cbegin(), s.cend(), ' ');
    vector<string> v;

    v.push_back(string(s.cbegin(), space));

    while (space != s.cend()) {
        auto start = ++space;
        space = find(start, s.cend(), ' ');
        v.push_back(string(start, space));
    }
    return v;
}



int main() {
    /* ======================================
    * Read in file from start.txt
    * Vector to store robots and attributes
    * =====================================*/

    ifstream startin("start.txt");
    vector<robot> robots;

    // Variable
    int n;
    int t;
    int x;
    int y;
    int d;

    // Print error if file not found
    if (!startin) {
        cout << "SYSTEM ERR: Cannot find start.txt";
    }

    // While reading file, store each robot in vector stack
    while (startin >> n >> t >> x >> y >> d) {
        robot r(n, t, x, y, d);
        robots.push_back(r);
    }


    /* ======================================
    * Read in file from cmd.txt
    * Vector to store robots and attributes
    * =====================================*/
  
    ifstream cmdin("command.txt");
    string str;

    while (getline(cmdin, str)) {
        auto v99354 = split_string(str);
    }


    /* ======================================
    * Execute Task 1
    * Show
    * =====================================*/

    if (str == "show") {
        for (const auto r : robots) {
            show(r);
            cout << '\n';
        }
    }

    return 0;
}
