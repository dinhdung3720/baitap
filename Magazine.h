#ifndef MAGAZINE_H
#define MAGAZINE_H
#include "Document.h"
class Magazine : public Document
{
public:
    Magazine();
    Magazine(int ID, string publisherName = "" , int numberOfReleases = 0 ,int date = 0, int month = 0);
    int getDate();
    int getMonth();
    string getType();

    void setDate(int date);
    void setMonth(int month);

    void insert();
    void show();

private:
    int date;
    int month;

};

Magazine::Magazine():
Document::Document(){};

Magazine::Magazine(int ID, string publisherName, int numberOfReleases  ,int date, int month):
Document::Document(ID,publisherName,numberOfReleases), date(date), month(month){};


int Magazine::getDate()
{
    return date;
}

int Magazine::getMonth()
{
    return month;
}

string Magazine::getType()
{
    return "Magazine";
}
void Magazine::setDate(int date)
{
    this->date = date;
}
void Magazine::setMonth(int month)
{
    this->month = month;
}

void Magazine::insert()
{
    cin >> *this;
    cout << "Nhap ngay : " << endl;
    cin >> date;
    cout << "Nhap thang : " << endl;
    cin >> month;

}
void Magazine::show()
{
    cout << "***************************************************" << endl;
    cout << *this;
    cout << "Ngay phat hanh la : " << this->getDate() << endl;
    cout << "Thang phat hanh la : " << this->getMonth() << endl;
    cout << "***************************************************" << endl;

}

;
#endif