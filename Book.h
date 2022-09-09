#ifndef BOOK_H
#define BOOK_h
#include "Document.h"
class Book : public Document
{
public:
    Book();
    Book(int ID, string publisherName = "" , int numberOfReleases = 0 ,string authorName = "",int pageNumber = 0);
    
    string getAuthorName();
    int getPageNumber();
    string getType();

    void setAuthorName(string authorName);
    void setPageNumber(int pageNumber);

    void inset();
    void show();

private:
    string authorName;
    int pageNumber;
};
Book::Book():Document::Document(){};
Book::Book(int ID, string publisherName , int numberOfReleases ,string authorName,int pageNumber):
Document::Document(ID,publisherName,numberOfReleases), authorName(authorName), pageNumber(pageNumber){};
    
string Book::getAuthorName()
{
    return authorName;
}
int Book::getPageNumber()
{
    return pageNumber;
}

string Book::getType()
{
    return "Book" ;
}

void Book::setAuthorName(string authorName)
{
    this->authorName = authorName;
}
void Book::setPageNumber(int pageNumber)
{
    this->pageNumber = pageNumber;
}

void Book::inset()
{
    cin >> *this;
    cout << "nhap ten tac gia : " << endl;
    cin >> authorName;
    cout << "Nhap so trang : " << endl;
    cin >> pageNumber ;
}
void Book::show()
{
    cout << "***************************************************" << endl;
    cout << *this;
    cout << "ten tac gia la : " << this->getAuthorName() << endl;
    cout << "so trang la : " << this->getPageNumber() << endl;
    cout << "***************************************************" << endl;
}

;
#endif