#include <iostream>
using namespace std;

int main()
{
    int arr[4]{};
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    cout << endl;
    for (int i = 0; i <= 8; i++) {
        for (int j = 0; j <= 7; j++) {
            if (i == 0) {
                cout << "  A B C D E F G H";
                break;
            }
            else if (j == 0) {
                cout << i << " ";
            }
            if (arr[1] == i and arr[0] == j + 1) {
                cout << "A ";
            }
            else if (arr[3] == i and arr[2] == j + 1) {
                cout << "B ";
            }
            else {
                cout << "- ";
            }
        }
        cout << endl;
    }
    if (arr[0] == arr[2] or arr[1] == arr[3] or arr[2] - arr[0] == arr[3] - arr[1] or arr[0] + arr[1] == arr[2] + arr[3]) {
        cout << "Yes";
    }
}
