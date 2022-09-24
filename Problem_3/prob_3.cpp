#include <iostream>

using namespace std;

int main(){
    int x;
    int y;
    cin >> x;
    cin >> y;

    switch (x % y)
    {
    case 0:
        cout << "Divisible";
        break;

    default:
        cout << "Not Divisible";
        break;
    }
    return 0;
}