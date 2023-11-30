#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int st, ed, md;
    int k[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(k) / sizeof(int);
    int target = 7;
    st = 0;
    ed = n - 1;

    while (ed >= st) {
        md = st + (ed - st) / 2;
        int element = k[md];

        if (element == target) {
            cout << "Found at location " << md << endl;
            break;
        } else if (target < element) {
            ed = md - 1;
        } else {
            st = md + 1;
        }
    }

    return 0;
}
