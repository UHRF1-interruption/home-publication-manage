#include <iostream>
#include "manage.h"
#include "Book.h"

using std::cout;
using std::endl;

void showMenu()
{
    cout << "----------------------------------------------------" << endl;
    cout << "*****************************************" << endl;
    cout << "*******    请选择您检索书籍的方式   *******" << endl;
    cout << "*******    1.通过书名查找          *******" << endl;
    cout << "*******    2.通过ISBN查找          *******" << endl;
    cout << "*******    3.通过作者查找          *******" << endl;
    cout << "*******    4.通过出版社查找        *******" << endl;
    cout << "*******    0.退出查找              *******" << endl;
    cout << "*****************************************" << endl;
}
