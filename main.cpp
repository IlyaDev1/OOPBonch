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

    cout << endl << endl << endl;

    decoration();
    SavingAccount a1;
    SavingAccount a2(12300, "tinkoff", 20000);
    SavingAccount a3(a2);
    SavingAccount a4 = a1;
    decoration();

    decoration();
    a2.printSA();
    a2.setPermission(true);
    a2.setSavingBalance(123456);
    cout << a2.getSavingBalance() << endl;
    a2.setSavingBalance(123);
    a2.printSA();
    decoration();

    return 0;
}