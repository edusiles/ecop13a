#include <iostream>
#include <iomanip>
#include "data.h"

using namespace std;

int main() {
    Data data1(1, 1, 2021);

    cout << "Data inicial: " << data1 << endl;
    cout << "Digite uma nova data no formato (dd mm aaaa): ";
    cin >> data1;

    cout << "Nova data: " << data1 << endl;
    cout << "Incrementando 1 dia (pre-fixado): " << ++data1 << endl;
    cout << "Incrementando 1 dia (pos-fixado): " << data1++ << endl;
    cout << "Data final: " << data1 << endl;

    return 0;
}