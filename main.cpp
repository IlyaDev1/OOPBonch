#include "head.h"

int main() {
    Massive a(5, 10);
    Massive b(5, 10);

    a.setValues();
    a.print();

    b.copyMas(a);
    b.print();

    a.append(-100);
    a.print();

    a.mulc(2);
    a.print();

    cout << a.getDif() << endl;

    cout << a.getAllMul() << endl;

    return 0;
}
