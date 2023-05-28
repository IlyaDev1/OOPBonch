#include "head.h"


void decor(){
    for (int i=0;i<20;i++){
        cout << "=";
    }
    cout << endl;
}


int main(){
    decor();
    CTwo a;
    CTwo b(20, 3.14, "hi");
    CTwo c(b);
    CTwo d = b;
    a.print();
    b.print();
    c.print();
    d.print();
    decor();

    decor();
    c.setN(40);
    c.setD(13.5);
    c.setS("newS");
    cout << c.getN() << endl;
    cout << c.getD() << endl;
    cout << c.getS() << endl;
    decor();

    return 0;
}