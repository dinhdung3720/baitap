#ifndef NEWSPAPER_H
#define NEWSPAPER_H
#include "Document.h"
class Newspaper : public Document
{
public:
    Newspaper();
    Newspaper(int ID, string publisherName = "" , int numberOfReleases = 0 ,int date = 0);

    int getDate();
    void setDate();
    string getType();

    void insert();
    void show();

private:
    int date;
};

Newspaper::Newspaper():
Document::Document(){};

Newspaper::Newspaper(int ID, string publisherName  , int numberOfReleases  ,int date ):
Document::Document(ID,publisherName,numberOfReleases),date(date){};

int Newspaper::getDate()
{
    return date;
}

string Newspaper::getType()
{
    return "Newspaper" ;
}
void Newspaper::setDate()
{
    this->date = date;
}

void Newspaper::insert()
{
    cin >> *this;
    cout << "Nhap ngay phat hanh : " << endl;
    cin >> date;

}
void Newspaper::show()
{
    cout << "***************************************************" << endl;
    cout << *this ;
    cout << "Ngay phat hanh la : " << this->getDate() << endl;
    cout << "***************************************************" << endl;
}



;
#endif