#include "head.h"


void decor(){
    for (int i=0;i<20;i++){
        cout << "=";
    }
    cout << endl;
}


int main(){
    decor();
    CThree a;
    CThree b(10, 20, 30, "hi");
    CThree c(b);
    CThree d = c;
    decor();

    decor();
    c.print();
    c.setNum(60);
    c.print();
    decor();


    return 0;
}