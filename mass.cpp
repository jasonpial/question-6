#include <iostream>
using namespace std;

double determineWeight(double mass) {
    return mass * 9.8;
}

int main() {
    double mass;
    cout << "Enter the mass of the object: ";
    cin >> mass;
    double weight = determineWeight(mass);
    cout << "The weight of the object is: " << weight << '\n';
    return 0;
}


