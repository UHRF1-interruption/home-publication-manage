#include <string>

class Book
{
private:
    std::string name;/* data */
    int ISBN;
    float price;
    std::string author;
    std::string publishing_house;
public:
    Book(/* args */);
    ~Book();
};

Book::Book(/* args */)
{
}

Book::~Book()
{
}

