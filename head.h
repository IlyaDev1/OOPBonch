#include <iostream>
using namespace std;


class ClientBank{
protected:
    string BankName;
    class ClientBalance{
    protected:
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


class SavingAccount : public ClientBank{
private:
    float SavingBalance;
    bool OutputPermission = false;

public:
    SavingAccount(){
        this->SavingBalance = 0;
        cout << "SavingAccount: " << this << endl;
    }

    SavingAccount(float value, string name="Bank", float BalanceOfClient=0){
        this->SavingBalance = value;
        this->BankName = name;
        this->CliBalance.setBalance(BalanceOfClient);
        cout << "SavingAccount: " << this << endl;
    }

    SavingAccount(SavingAccount & object){
        this->SavingBalance = object.SavingBalance;
        this->BankName = object.BankName;
        this->CliBalance.setBalance(object.CliBalance.getBalance());
        cout << "SavingAccount: " << this << endl;
    }

    SavingAccount & operator =(SavingAccount & object){
        this->SavingBalance = object.SavingBalance;
        this->BankName = object.BankName;
        this->CliBalance.setBalance(object.CliBalance.getBalance());
        cout << "SavingAccount: " << this << endl;
    }

    void setPermission(bool value){
        this->OutputPermission = value;
        cout << "for output you need to wait a day" << endl;
    }

    float getSavingBalance(){
        return SavingBalance;
    }

    void setSavingBalance(float value){
        if (not OutputPermission){
            cout << "operation is not available" << endl;
        }
        else{
            this->SavingBalance = value;
            OutputPermission = false;
        }
    }

    void printSA(){
        cout << "Saving Balance: " << SavingBalance << endl;
        cout << "OutputPermission: " << OutputPermission << endl;
        print();
    }

    ~SavingAccount(){
        cout << this << endl;
    }
};