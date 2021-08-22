#include<iostream>
#include<string>
#include <Windows.h>


using namespace std;

struct Book
{

    string name;
    string author;
    string publisher;
    string genre;

    Book()
    {
        cout << "********************" << endl;
        cout << "Название : ";
        getline(cin, name);
        cout << "\nАвтор : ";
        getline(cin, author);
        cout << "\nИздательство : ";
        getline(cin, publisher);
        cout << "\nЖанр : ";
        getline(cin, genre);

    }
    void Print()
    {

        cout << "********************" << endl;
        cout << "Название : " << name;
        cout << "\nАвтор : " << author;
        cout << "\nИздательство : " << publisher;
        cout << "\nЖанр : " << genre << endl;
    }
    void Edit()
    {
        system("cls");
        cout << "Название : ";
        getline(cin, name);
        cout << "\nАвтор : ";
        getline(cin, author);
        cout << "\nИздательство : ";
        getline(cin, publisher);
        cout << "\nЖанр : ";
        getline(cin, genre);
    }


};
struct Library
{
private:
    int size = 3;
    Book* ArrLib = new Book[size];
   
public:
    Library()
    {
        for (int i = 0; i < size; i++)
        {

            ArrLib[i];

        }
    }
    
    void Print()
    {
        system("cls");
        for (int i = 0; i < size; i++)
        {
            ArrLib[i].Print();

        }
    }
    void Search()
    {
        string temp;
        cout << "Поиск : ";
        getline(cin, temp);
        for (int i = 0; i < size; i++)
        {
            if (ArrLib[i].author == temp)
            {
                cout << i + 1 << ". ";
                ArrLib[i].Print();
            }
        }
        for (int i = 0; i < size; i++)
        {
            if (ArrLib[i].name == temp)
            {
                cout << i + 1 << ". ";
                ArrLib[i].Print();
            }
        }
    }
    void Edit()
    {
        int i;
        system("cls");
        cout << "Введите номер авто которую хотите редактировать : ";
        cin >> i;
        ArrLib[i - 1].Edit();
        cout << "#>-------------<Automobile #" << i << ">-------------<#" << endl;
        ArrLib[i - 1].Print();

    }
    void Sort()
    {
        int menu;
        cout << "1.По названию" << endl;
        cout << "2.По автору" << endl;
        cout << "3.По издательству" << endl;
        cout << "=> ";
        cin >> menu;
        switch (menu)
        {
        case 1:
            for (int i = 0; i < size; i++)
            {
                for (int j = size - 1; j > i; j--)
                {
                    if (ArrLib[j - 1].name > ArrLib[j].name)
                    {
                        swap(ArrLib[j - 1], ArrLib[j]);
                    }
                }
            }
            break;

        case 2:
            for (int i = 0; i < size; i++)
            {
                for (int j = size - 1; j > i; j--)
                {
                    if (ArrLib[j - 1].author > ArrLib[j].author)
                    {
                        swap(ArrLib[j - 1], ArrLib[j]);
                    }
                }
            }
            break;
        case 3:
            for (int i = 0; i < size; i++)
            {
                for (int j = size - 1; j > i; j--)
                {
                    if (ArrLib[j - 1].publisher > ArrLib[j].publisher)
                    {
                        swap(ArrLib[j - 1], ArrLib[j]);
                    }
                }
            }
            break;
        }
    }
};
int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
   
    Library a;
    cout << endl << endl << "Выбрать действие" << endl << "==========" <<
        endl << endl <<
        "Выйти - 0" << endl << "Редактировать  - 1" << endl <<
        "Печать списка книг- 2" << endl << "Искать по автору - 3" << endl << "Сортировать - 4" << endl;
    cout << "=> ";
    cin >> num;


    switch (num)
    {
    case 0:
        cout << "ВЫХОД" << endl;
        break;
    case 1:
        a.Edit();
        break;
    case 2:
        a.Print();
        break;
    case 3:
        a.Search();
        break;
    case 4:
        a.Sort();
        a.Print();
        break;

    default:
        cout << "значение не верное!";
        break;
    }
    
        
    return 0;
}

/*Задание 3:
Разработайте программу «Библиотека». Создайте структуру «Книга» (название, автор, издательство, жанр). 
Создайте массив из 10 книг. Реализуйте для него следующие возможности:
Редактировать книгу
Печать всех книг
Поиск книг по автору
Поиск книги по названию
Сортировка массива по названию книг
Сортировка массива по автору
Сортировка массива по издательству*/