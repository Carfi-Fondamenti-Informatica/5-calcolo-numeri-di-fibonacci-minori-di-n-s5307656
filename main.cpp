#include <iostream>
using namespace std;

int main() {
    int n=0, primo=0, secondo= 1, terzo=0;
    cin >> n;
        for (int i=1; i<=n; i++) {
            terzo=primo+secondo;
            secondo=primo;
            primo=terzo;
    if (terzo<=n) {
        cout << terzo << endl;
    }
        }
    return 0;
}
