#include "Book.h"
#include <vector>

Book::Book(/* args */)
{
}

Book::~Book()
{
}

void Book::Book_Search()
{

}

void Book::Set_Book(std::vector<Book> &b)
{
    Book newbook;
    AddBookName(b, newbook);
    AddBookISBN(b, newbook);
    AddBookPrice(b, newbook);
    AddBookAuthor(b, newbook);
    AddBookPublish(b, newbook);
    b.push_back(newbook);
}

int isExist(int64_t isbn, std::vector<Book> &b)
{
    for (auto& i : b)
    {
        //遍历这个Book类vector，判断ISBN是否唯一
        if (i.ISBN == isbn) return -1;
    }
    return 0;
}

void AddBookName(vector<Book> &b, Book &c)
{
    std::string n;
    cout << "请输入书名：" << endl;
    cin >> n;
    c.name = n;
}

void addBookIsbn(vector<Book> &b, Book &c)
{
    int64_t isbn;
    cout << "请输入ISBN号：" << endl;
    while (true)
    {
        cin >> isbn;
        if (isExist(isbn, b) == -1) cout << "ISBN号重复，请重新输入：" << endl;
        else break;
    }
    c.ISBN = isbn;
}

void AddBookPrice(vector<Book> &b, Book &c)
{
    float p;
    cout << "请输入价格：" << endl;
    cin >> p;
    c.price = p;
}

void AddBookAuthor(vector<Book> &b, Book &c)
{
    std::string a;
    cout << "请输入作者：" << endl;
    cin >> a;
    c.author = a;
}

void AddBookPublish(vector<Book> &b, Book &c)
{
    std::string p;
    cout << "请输入出版社：" << endl;
    cin >> p;
    c.publishing_house = p;
}
