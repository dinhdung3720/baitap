#include<iostream>
#include "Function.h"

using namespace std;
class Base
{
    int data;
public:
    Base(){data = 0;};
    Base(int data) : data(data) {};
    friend istream& operator >>(istream &in, Base &obj)
    {
        cout << "nhap data1 : " << endl;
        in >> obj.data ;
        return in;
    }
    int getData()
    {
        return data;
    }

};
class Derive : public Base
{
    int data2;
public:
    Derive():Base::Base(),data2(data2){};
    Derive(int data, int data2) : Base::Base(data), data2(data2){};
    void insert()
    {
        cin >> *this;
        cout << "nhap data2" << endl;
        cin >> data2;
    }
    void show()
    {
        cout << "data1 la : " << getData()<< endl;
        cout << "data2 la : " << data2 << endl;
    }

}

;
int main()
{
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(1);
    vec.push_back(7);   
    int a =9;
    if(verify(vec,a))
    {
        cout << "co chen duoc" << endl;
    }
    else
    {
        cout << "khong chen duoc" << endl;
    }
    return 0;
}