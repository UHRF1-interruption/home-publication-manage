#include "CD.h"

CD::CD(/* args */)
{
}

CD::~CD()
{
}

void CD::CD_Search()
{
}

void CD::Set_CD(int64_t d1, float f, std::string s1, std::string s2, std::string s3, int d2, std::string s4)
{
    ISBN = d1;
    price = f;
    artist = s1;
    manufacture = s2;
    official_release_date = s3;
    number_of_discs = d2;
    Catalog_No = s4;
}
