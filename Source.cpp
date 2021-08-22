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
        cout << "�������� : ";
        getline(cin, name);
        cout << "\n����� : ";
        getline(cin, author);
        cout << "\n������������ : ";
        getline(cin, publisher);
        cout << "\n���� : ";
        getline(cin, genre);

    }
    void Print()
    {

        cout << "********************" << endl;
        cout << "�������� : " << name;
        cout << "\n����� : " << author;
        cout << "\n������������ : " << publisher;
        cout << "\n���� : " << genre << endl;
    }
    void Edit()
    {
        system("cls");
        cout << "�������� : ";
        getline(cin, name);
        cout << "\n����� : ";
        getline(cin, author);
        cout << "\n������������ : ";
        getline(cin, publisher);
        cout << "\n���� : ";
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
        cout << "����� : ";
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
        cout << "������� ����� ���� ������� ������ ������������� : ";
        cin >> i;
        ArrLib[i - 1].Edit();
        cout << "#>-------------<Automobile #" << i << ">-------------<#" << endl;
        ArrLib[i - 1].Print();

    }
    void Sort()
    {
        int menu;
        cout << "1.�� ��������" << endl;
        cout << "2.�� ������" << endl;
        cout << "3.�� ������������" << endl;
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
    cout << endl << endl << "������� ��������" << endl << "==========" <<
        endl << endl <<
        "����� - 0" << endl << "�������������  - 1" << endl <<
        "������ ������ ����- 2" << endl << "������ �� ������ - 3" << endl << "����������� - 4" << endl;
    cout << "=> ";
    cin >> num;


    switch (num)
    {
    case 0:
        cout << "�����" << endl;
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
        cout << "�������� �� ������!";
        break;
    }
    
        
    return 0;
}

/*������� 3:
������������ ��������� �����������. �������� ��������� ������ (��������, �����, ������������, ����). 
�������� ������ �� 10 ����. ���������� ��� ���� ��������� �����������:
������������� �����
������ ���� ����
����� ���� �� ������
����� ����� �� ��������
���������� ������� �� �������� ����
���������� ������� �� ������
���������� ������� �� ������������*/