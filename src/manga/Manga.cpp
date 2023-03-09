#include "Manga.h"

Manga::Manga(/* args */)
{
}

Manga::~Manga()
{
}

void Manga::Manga_Search()
{

}

void Manga::Set_Manga(std::string s1, int64_t d, float f, std::string s2)
{
    author = s1;
    ISBN = d;
    price = f;
    publishing_house = s2;
}

