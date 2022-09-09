#include<iostream>
#include "Book.h"
#include "Newspaper.h"
#include "Magazine.h"
#include "DocManager.h"

using namespace std;
int main()
{
    Docmanager<Book>      Book_manager;
    Docmanager<Newspaper> Newspaper_manager;
    Docmanager<Magazine>  Manazine_manager;
    int choice;
    while(1)
    {
        cout << "============================== MENU =============================\n";
		cout << "=\t01. Them tai lieu vao thu vien.	        \t\t=\n";
		cout << "=\t02. Xoa tai lieu         		        \t=\n";
		cout << "=\t03. Hien thi thong tin tai lieu		    \t=\n";
		cout << "=\t04. Tim kiem tai lieu			        \t=\n";
		cout << "=\t05. Thoat chuong trinh.			        \t=\n";
		cout << "=================================================================\n";
		cout << "Nhap lua chon: ";
		cin >> choice;
		cin.ignore();     
    switch (choice)
    {
    case 1:
    {

        int choice_type;
        cout << "Ban muon them loai tai lieu nao : " << endl;
        cout << "**********************************"<< endl;
        cout << "=\t01. Them sach vao thu vien.	        \t\t=\n";
        cout << "=\t02. Them bao vao thu vien.	            \t\t=\n";
        cout << "=\t03. Them tap chi vao thu vien.	        \t\t=\n";
        cout << "**********************************"<< endl;
        
        cin >> choice_type;
        if(choice_type == 1)
        {
                Book temp1;
                temp1.inset();
                Book_manager.addElement(temp1);
                break;            
        }
        else if(choice_type == 2)
        {
                Newspaper temp2;
                temp2.insert();
                Newspaper_manager.addElement(temp2);
                break;
        }
        else if(choice_type == 3)
        {
                Magazine temp3;
                temp3.insert();
                Manazine_manager.addElement(temp3);
                break;
        }
        else
        {
            break;
        }
 
    }
    case 2:
    {
        int id_temp;
        cout << "Nhap ID tai lieu : " << endl;
        cin >> id_temp;
        Book_manager.deleteElementT(id_temp);
        Newspaper_manager.deleteElementT(id_temp);
        Manazine_manager.deleteElementT(id_temp);
     

        break;
    }    
    case 3:
    {
        Book_manager.display();
        Newspaper_manager.display();
        Manazine_manager.display();
        break;
    }
    case 4:
    {
        int id_temp;
        cout << "Nhap ID tai lieu : " << endl;
        cin >> id_temp;
        Book_manager.findElementbyType(id_temp);
        Newspaper_manager.findElementbyType(id_temp);
        Manazine_manager.findElementbyType(id_temp);
        break;
    }
    case 5:
    {
        exit(0);
        break;
    }
    }


    }
    return 0;



}