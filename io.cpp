#include <iostream>
#include "manage.h"

using std::cin;
using std::cout;
using std::endl;

void Show_mainMenu();
void ShowType();
void showMenu3();
void showMenu4();
void showMenu5();
void showMenu();

int main(int argc, char **argv)
{
    int operate, type, ope_ty = 10 * operate + type;
    {
        Show_mainMenu();
        re_code:
        cin >> operate;
        switch (operate)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 0:
            break;
        default:
        {
            cout << "无此操作号，请重新操作" << endl;
            goto re_code;
        }
        }
    }
    {
        showType();
        re_code:
        cin >> type;
        switch (type)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 0:
            break;
        default:
        {
            cout << "无此操作号，请重新操作" << endl;
            goto re_code;
        }
        }
    }
    switch (ope_ty)
    {
    case 11:
    {
        /* code */
        break;
    }
    case 12:
    {
        break;
    }
    case 13:
    {
        break;
    }
    case 14:
    {
        break;
    }
    case 21:
    {
        break;
    }
    case 22:
    {
        break;
    }
    case 23:
    {
        break;
    }
    case 24:
    {
        break;
    }
    case 31:
    {
        break;
    }
    case 32:
    {
        break;
    }
    case 33:
    {
        break;
    }
    case 34:
    {
        break;
    }
    default:
        break;
    }
}

void Show_mainMenu()
{
    cout << "*****************************************" << endl;
    cout << "*******    您需要做什么            *******" << endl;
    cout << "*******    1.增加出版物            *******" << endl;
    cout << "*******    2.检索出版物            *******" << endl;
    cout << "*******    3.修改出版物信息        *******" << endl;
    cout << "*******    0.退出系统              *******" << endl;
    cout << "*****************************************" << endl;
}
void showType()
{
    cout << "---------------------------------------------------" << endl;
    cout << "*****************************************" << endl;
    cout << "*******    请选择您的出版物类型     *******" << endl;
    cout << "*******    1.书籍                 *******" << endl;
    cout << "*******    2.CD                   *******" << endl;
    cout << "*******    3.漫画                 *******" << endl;
    cout << "*******    4.期刊                 *******" << endl;
    cout << "*******    0.退出选择              *******" << endl;
    cout << "*****************************************" << endl;
}
