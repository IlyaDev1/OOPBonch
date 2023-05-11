#include <iostream>
using namespace std;


class ClientBank{
private:
    string BankName;
    class ClientBalance{
    private:
        float Balance;

    public:
        ClientBalance(){
            this->Balance = 0;
            cout << "Balance: " << this << endl;
        }

        ClientBalance(float value){
            this->Balance = value;
            cout << "Balance: " << this << endl;
        }

        ClientBalance & operator =(ClientBalance & object){
            this->Balance = object.Balance;
            cout << "Balance: " << this << endl;
        }

        float getBalance(){
            return Balance;
        }

        void setBalance(float value){
            this->Balance = value;
        }

        void print(){
            cout << "Balance: " << Balance << endl;
        }

        ~ClientBalance(){
            cout << "Balance: " << this << endl;
        }
    };
    ClientBalance CliBalance;

public:
    ClientBank(){
        this->BankName = "Bank";
        cout << "Bank: " << this << endl;
    }

    ClientBank(string name, float BalanceValue=0){
        this->BankName = name;
        CliBalance.setBalance(BalanceValue);
        cout << "Bank: " << this << endl;
    }

    ClientBank(ClientBank & object){
        this->BankName = object.BankName;
        this->CliBalance.setBalance(object.CliBalance.getBalance());
        cout << "Bank: " << this << endl;
    }

    ClientBank & operator =(ClientBank & object){
        this->BankName = object.BankName;
        this->CliBalance.setBalance(object.CliBalance.getBalance());
        cout << "Bank: " << this << endl;
    }

    string getBankName(){
        return BankName;
    }

    float getClientBalance(){
        return CliBalance.getBalance();
    }

    void setBankName(string name){
        this->BankName = name;
    }

    void setClientBalance(float ClientBalanceValue){
        this->CliBalance.setBalance(ClientBalanceValue);
    }

    void print(){
        cout << "Bank: " << BankName << endl;
        CliBalance.print();
    }

    ~ClientBank(){
        cout << "Bank: " << this << endl;
    }
};