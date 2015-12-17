#include <iostream>
#include "Bruchzahl.hpp"

int main() {
    Bruchzahl bruch1(4, 9);
    Bruchzahl bruch2(2, 9);
    Bruchzahl bruch3(4, 3);

    using namespace std;

    cout << bruch1.alsString() << " + " << bruch2.alsString();
    bruch1.addiere(bruch2);
    cout << " = " << bruch1.alsString() << endl;

    cout << bruch1.alsString() << " + " << bruch3.alsString();
    bruch1.addiere(bruch3);
    cout << " = " << bruch1.alsString() << endl;
}
