#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j <= n; j++) {
            // Check if it's the first row or first column
            if (i == 0 || j == i+1 ||j==n) {
                cout << j;
            } 
            else{
                cout<<" ";
            }
            }
            cout<<endl;
            
        }
        // Move to the next line after each row
        cout << endl;
    

    return 0;
}
