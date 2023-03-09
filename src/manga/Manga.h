#ifndef MANGA_H_
#define MANGA_H_

#include <string>
#include <vector>

class Manga
{
private:
    std::string name;
    std::string author;
    int64_t ISBN;
    float price;
    std::string publishing_house;
public:
    Manga(/* args */);
    ~Manga();
    void Manga_Search();
    void Set_Manga(std::string s1; int64_t d, float f, std::string s2);
};

#endif
