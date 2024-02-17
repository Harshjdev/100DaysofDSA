//Longest Consecutive Sequence in an Array
#include <iostream>
#include <algorithm>
using namespace std;

int longestSuccessiveElements(int a[], int n) {
    sort(a, a + n);
    int cnt = 1;
    int maxcnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1] + 1) {
            cnt++;
            maxcnt = max(maxcnt, cnt);
        } else if (a[i] != a[i - 1]) {
            cnt = 1;
        }
    }
    return maxcnt;
}

int main() {
    int n = 6;
    int a[] = {5, 8, 3, 2, 1, 4};
    cout << longestSuccessiveElements(a, n);
    return 0;
}
