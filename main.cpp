#include "head.h"


void decoration(){
    for (int i=0; i<20; i++){
        cout << "=";
    }
    cout << endl;
}


int main(){
    decoration();
    ClientBank user1;
    ClientBank user2("tinkoff");
    ClientBank user3("sber", 100);
    ClientBank user4(user2);
    ClientBank user5 = user3;
    decoration();

    decoration();
    user1.print();
    user2.print();
    user3.print();
    user4.print();
    user5.print();
    decoration();

    decoration();
    cout << user3.getBankName() << endl;
    cout << user3.getClientBalance() << endl;
    user3.setBankName("NewTestBank");
    user3.setClientBalance(99999);
    cout << user3.getBankName() << endl;
    cout << user3.getClientBalance() << endl;
    decoration();

    return 0;
}