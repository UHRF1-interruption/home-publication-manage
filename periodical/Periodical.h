#include <string>

class Periodical
{
private:
    std::string title;/* data */
    int ISSN;
    std::string period;
    float price;
    std::string publishing_house;
public:
    Periodical(/* args */);
    ~Periodical();
};

Periodical::Periodical(/* args */)
{
}

Periodical::~Periodical()
{
}
