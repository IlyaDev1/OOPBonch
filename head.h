#include <iostream>
using namespace std;


class Massive{
private:
    int minIndex = 0;
    int maxIndex = 0;
    int *mas = new int[maxIndex];

public:
    Massive(int minIndex, int maxIndex){
        this->minIndex = minIndex;
        this->maxIndex = maxIndex;
        this->mas = new int[maxIndex];
        for (int i=0; i<maxIndex; i++){
            mas[i] = 0;
        }
        cout << this << endl;
    }

    void setValues(){
        for (int i=0; i<this->maxIndex; i++){
            cin >> this->mas[i];
        }
    }

    void print(){
        for (int i=0; i<maxIndex; i++){
            cout << mas[i] << " ";
        }
        cout << endl;
    }

    void copyMas(Massive & object){
        for (int i=0; i<this->maxIndex; i++){
            this->mas[i] = object.mas[i];
        }
    }

    void append(int value) {
        this->maxIndex += 1;
        int *newmas = new int[this->maxIndex];
        for (int i = 0; i < this->maxIndex; i++) {
            newmas[i] = this->mas[i];
        }
        newmas[this->maxIndex-1] = value;

        delete[] this->mas;
        this->mas = new int[this->maxIndex];
        this->mas = newmas;
    }

    void mulc(int value){
        for (int i=0; i<maxIndex; i++){
            this->mas[i] *= value;
        }
    }

    int getDif(){
        int nmax = mas[0]; int nmin = mas[0];
        for (int i=0; i<maxIndex; i++){
            if (nmax < mas[i]){
                nmax = mas[i];
            }

            if (nmin > mas[i]){
                nmin = mas[i];
            }
        }
        return nmax - nmin;
    }

    int getAllMul(){
        int m = 1;
        for (int i=0; i<maxIndex; i++){
            m *= mas[i];
        }
        return m;
    }

    ~Massive(){
        cout << this << endl;
    }
};