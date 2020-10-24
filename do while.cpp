#include<iostream>
using namespace std;
class Book {
    public:
        string title;
        string author;
        int pages;
    Book(string aTitle, string aAuthor,int aPage){

        title = aTitle;
        author = aAuthor;
        pages = aPage;

        }
};

int main()
{
    Book book1("c# language", "Nitish", 58);
    Book book2("c-programming quiz", "Bablu Raj Jankop", 345);

    cout << book2.title << endl;

    return 0;
}

