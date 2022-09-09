#ifndef DOCUMENT_H
#define DOCUMENT_H
#include<iostream>
using namespace std;
class Document
{
public:
    Document();
    Document(int ID, string publisherName = "", int numberOfReleases = 0);

    int getID();
    string getPublisherName();
    int getNumberOfReleases();

    void setID(int ID);
    void setPublisherName(string publisherName);
    void setNumberOfReleases(int numberOfReleases);

    friend istream& operator >> (istream &in, Document &obj);
    friend ostream& operator << (ostream &out, Document &obj);
    
    bool operator == (Document &obj);
    bool operator < (Document &obj);

private:
    int ID;
    string publisherName;
    int numberOfReleases;
};
Document::Document()
{
    this->ID =0 ;
    this->publisherName = "";
    this->numberOfReleases = 0;
};

Document::Document(int ID, string publisherName, int numberOfReleases):
ID(ID), publisherName(publisherName), numberOfReleases(numberOfReleases){};

int Document::getID()
{
    return ID;
}


string Document::getPublisherName()
{
    return publisherName;
}
int Document::getNumberOfReleases()
{
    return numberOfReleases;
}

void Document::setID(int ID)
{
    this->ID = ID;
}
void Document::setPublisherName(string publisherName)
{
    this->publisherName = publisherName;
}
void Document::setNumberOfReleases(int numberOfReleases)
{
    this->numberOfReleases = numberOfReleases;
}

istream& operator >> (istream &in, Document &obj)
{
    cout << "Nhap ma so tai lieu : " << endl;
    in >> obj.ID;
    cout << "Nhap ten nha xuat ban : " << endl;
    in >> obj.publisherName;
    cout << "Nhap so ban phat hanh : " << endl;
    in >> obj.numberOfReleases;

    return in;
}
ostream& operator << (ostream &out, Document &obj)
{
    out << "Ma so tai lieu : " << obj.getID() << endl;
    out << "Ten nha xuat ban : " << obj.getPublisherName() << endl;
    out << "So phan phat hanh : " << obj.getNumberOfReleases()  << endl;

    return out;
};

bool Document:: operator == (Document &obj)
{
    return (this->ID == obj.ID) ;
}

bool Document:: operator < (Document &obj)
{
    return (this->ID < obj.ID) ;
}


;
#endif