#include <iostream>
#include <iomanip> // for setprecision()
using namespace std;

int main() {
    double pi = 3.14159265358979323846;

    cout << "Default precision of pi: " << pi << endl;
    cout << "Setting precision to 5: " << setprecision(5) << pi << endl;
    cout << "Setting precision to 10: " << setprecision(10) << pi << endl;

    return 0;
}
