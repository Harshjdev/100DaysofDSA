#include <iostream>

using namespace std;

int Maximum(int x, int y) {

  if (x > y) {

    return x;

  } else {

    return y;

  }

}
void Swap(int &x, int &y) {

  int temp = x; // Store the value of x in a temporary variable

  x = y;        // Assign the value of y to x

  y = temp;

}
int main() {

    int test, x,y,  r;

    cin >> test >> x >> y;

 

    switch (test) {

        case 1:

            r = Maximum(x, y);

            cout << r;

            break;

        case 2:

            Swap(x, y);

            cout << x << " " << y;

            break;

        default:

            cout << "Invalid test option";

    }

 

    return 0;

}

