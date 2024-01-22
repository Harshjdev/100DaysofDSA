#include <iostream>
using namespace std;
int function10(int n) {
    if (n <= 0) {
        return 1;
    }

 
    function10(n - 1);
    return n;
}
int main() {
    int n;
    cin >> n;
    function10(n);

    return 0;
}
