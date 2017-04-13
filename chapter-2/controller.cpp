/**
 * Created by vincent on 2017/4/8.
 */
#include <iostream>

using namespace std;

int main() {

    int count = 0;

    /**
     * for
     */
    for (int i = 0; i < 5; ++i) {
        cout << "vincent" << endl;
    }

    /**
     * while
     */
    while (count < 5) {
        cout << "vincent" << endl;
        count++;
    }
    count = 0;

    /**
     * do while
     */
    do {
        cout << "vincent" << endl;
        count++;
    } while (count < 5);

    /**
     * if else
     */
    if (count > 0) {
        cout << "count > 0" << endl;
    } else {
        cout << "count <= 0" << endl;
    }

    /**
     * switch case
     */
    switch (count) {
        case 0 :
            cout << "count == 0" << endl;
            break;
        case 1 :
            cout << "count == 1" << endl;
            break;
        case 2 :
            cout << "count == 2" << endl;
            break;
        case 3 :
            cout << "count == 3" << endl;
            break;
        case 4 :
            cout << "count == 4" << endl;
            break;
        default:
            cout << "cannot case count value." << endl;
            break;
    }

    return 0;
}

