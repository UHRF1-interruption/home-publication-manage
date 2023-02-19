#include <string>

class CD
{
private:
    std::string title;/* data */
    int ISBN;
    float price;
    std::string artist;//应该使用字符数组以存储cd中多名艺术家
    std::string manufacture;//厂牌
    std::string official_release_date;//日期格式待选
    int number_of_discs;
    std::string Catalog_No;//目录号码，即cd编号
    char Genre;//此处应为可选项，包含多种内容类型
public:
    CD(/* args */);
    ~CD();
};

CD::CD(/* args */)
{
}

CD::~CD()
{
}
