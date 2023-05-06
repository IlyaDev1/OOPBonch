#include <iostream>
#include <cmath>
using namespace std;


class Complex{
private:
    float d;
    float m;
    float mod;

public:
    Complex(float valueD, float valueM){
        this->d = valueD;
        this->m = valueM;
        this->mod = sqrt(d * d + m * m);
        cout << this << " " << mod << endl;
    }

    void setMod(){
        this->mod = sqrt(d * d + m * m);
    }

    void print(){
        cout << d << " + " << m << "i mod=" << mod << endl;
    }

    void setValues(float valueD, float valueM){
        this->d = valueD;
        this->m = valueM;
        setMod();
    }

    void sum(Complex & object){
        this->m += object.m;
        this->d += object.d;
        setMod();
    }

    void dif(Complex & object){
        this->m -= object.m;
        this->d -= object.d;
        setMod();
    }

    void mul(Complex & object){
        this->d = d * object.d - m * object.m;
        this->m = d * object.m + m * object.d;
        setMod();
    }

    void div(Complex & object){
        this->d = (d * object.d + m * object.m) / (object.d * object.d + object.m * object.m);
        this->m = (m * object.d - d * object.m) / (object.d * object.d + object.m * object.m);
        setMod();
    }

    ~Complex(){
        cout << this << endl;
    }
};