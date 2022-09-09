#ifndef DOCMANAGER_H
#define DOCMANAGER_H
#include "Function.h"

#include<vector>
template <class T>
class Docmanager
{
public:
    void addElement(T &obj);
    void deleteElementT(int index);
    void display();
    void findElementbyType(int id);
    void finish();
private:
    vector<T> Book_manage;

};

template<class T>
void Docmanager<T>::addElement(T &obj)
{
    if(verify(Book_manage,obj))
    {
        Book_manage.push_back(obj);
    }
    else
    {
        cout << "Ma so da ton tai, vui long kiem tra lai !" << endl;
    }
    
}

template<class T>
void Docmanager<T>::deleteElementT(int id)
{
    T obj(id);
    int count = 0;
    int index = 0;
    bool mask = false;
    for(auto key : Book_manage)
    {
        
        if(key == obj)
        {
            index = count;
            mask  = true;
        }
        count++;
    };
    if(mask)
    {
        Book_manage.erase(Book_manage.begin()+index);
        cout << "---------------Xoa thanh cong !!!---------------" <<endl;
    }
    else
    {
        cout << "--------------Khong tim thay ma ID !!!----------" <<endl;
    };

}

template<class T>
void Docmanager<T>::display()
{
    for(auto it : Book_manage)
    {
        it.show();
    }
}

template<class T>
void Docmanager<T>::findElementbyType(int id)
{
    T obj(id);
    int count = 0;
    int index = 0;
    for(auto key : Book_manage)
    {
        
        if(key == obj)
        {
            index = count;
            cout << "Tai lieu tim kiem thuoc loai " << obj.getType() << endl;
            cout << "Thong tin tai lieu la : " << endl;
            key.show();
        }
        
    };

}

template<class T>
void Docmanager<T>::finish()
{

}


;
#endif