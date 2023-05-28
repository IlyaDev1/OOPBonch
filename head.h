#include <iostream>
using namespace std;


class COne;
class CTwo;

class COne{
protected:
    friend CTwo;
    double D;
    string S;

public:
    COne(){
        this->D = 0;
        this->S = "";
        cout << "created: " << this << endl;
    }

    COne(double d, string s){
        this->D = d;
        this->S = s;
        cout << "created: " << this << endl;
    }

    COne(const COne & object){
        this->D = object.D;
        this->S = object.S;
        cout << "created: " << this << endl;
    }

    COne & operator =(const COne & object){
        this->D = object.D;
        this->S = object.S;
        cout << "created: " << this << endl;
    }

    void setD(double d){
        this->D = d;
    }

    void setS(string s){
        this->S = s;
    }

    double getD(){
        return D;
    }

    string getS(){
        return S;
    }

    void print(){
        cout << "D: " << D << "  ||  " << "S: " << S << "  ||  ";
    }

    ~COne(){
        cout << "deleted: " << this << endl;
    }
};


class CTwo{
protected:
    int N;
    COne *One;

public:
    CTwo(){
        this->N = 0;
        this->One = new COne;
        cout << "created2: " << this << endl;
    }

    CTwo(int n, double d=0, string s=""){
        this->N = n;
        this->One = new COne(d, s);
        cout << "created2: " << this << endl;
    }

    CTwo(const CTwo & object){
        this->N = object.N;
        this->One = new COne(*object.One);
        cout << "created2: " << this << endl;
    }

    CTwo & operator =(const CTwo & object){
        this->N = object.N;
        this->One = new COne(*object.One);
        cout << "created2: " << this << endl;
    }

    void setN(int n){
        this->N = n;
    }
    void setD(double D);
    void setS(string S);

    int getN(){
        return N;
    }
    double getD();
    string getS();

    void print(){
        One->print();
        cout << "N: " << N << endl;
    }

    ~CTwo(){
        delete One;
        cout << "deleted2: " << this << endl;
    }
};


void CTwo::setD(double d){
    One->setD(d);
}

void CTwo::setS(string s){
    One->setS(s);
}

double CTwo::getD(){
    return One->getD();
}

string CTwo::getS(){
    return One->getS();
}