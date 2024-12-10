#include <iostream>
#include <cmath>

using namespace std;


int a;
int b;
int c;
int delta;

int fdelta() {
    delta = bb - (4(a*c));
    return delta;
}
int main() {
    cout << "Wpisz a b c z postaci ogolnej" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    fdelta();
    cout << delta << endl;

    // switch (1) {
    //     case delta<0:
    //         cout << "Brak miejsc zerowych" << endl;
    //     break
    //     case delta==0:

    // }

    return 0;
}