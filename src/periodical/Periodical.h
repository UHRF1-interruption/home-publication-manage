#ifndef PERIOD_H_
#define PERIOD_H_

#include <string>
#include <vector>

class Periodical
{
private:
    std::string title;
    int64_t ISSN;
    std::string period;
    float price;
    std::string publishing_house;
public:
    Periodical(/* args */);
    ~Periodical();
    void P_Search();
    void Set_P(int64_t d, float f, std::string s);
};

#endif
