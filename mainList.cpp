#include "ListNode.h"
 
/**
@mainList Список
Состоит из следующих частей:
- @ref List список
*/

int main()
{
        List<int> Lst;
        Lst.push_back(5);
        Lst.push_back(10);
        Lst.push_back(15);
        Lst.push_front(1);
        Lst.push_front(25);
        Lst.push_back(4);
        Lst.insert(9);
        Lst.insert(6);
        Lst.insert(4);
        Lst.insert(5);
        Lst.insert(55);
        Lst.insert(40);
        Lst.insert(0);
        Lst.insert(70);
        Lst.insert(56);
        Lst.erase(5);
        try
        {
                Lst.print();
        }
        catch(const std::string& e)
        {
                std::cout<<e<<'\n';
        }
		system("pause");
        return 0;
}