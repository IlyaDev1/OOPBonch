#include "head.h"


int main(){
    Complex a(3, 4);
    Complex b(10, 20);
    a.print();

    a.sum(b);
    a.print();

    a.dif(b);
    a.print();

    a.mul(b);
    a.print();

    a.div(b);
    a.print();

    return 0;
}