#ifndef BOOK_H_
#define BOOK_H_

#include <string>
#include <vector>

class Book
{
private:
    std::string name;
    int64_t ISBN;
    float price;
    std::string author;
    std::string publishing_house;
public:
    Book(/* args */);
    ~Book();
    void Book_Search();
    void Set_Book(std::vector<Book> &b);
};

#endif
