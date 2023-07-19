#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(1);
    list1.push_back(12);
    display(list1);

    // // remove element from list
    // list1.pop_back();
    // list1.pop_front();
    // display(list1);
    list1.remove(9);
    display(list1);
    list1.sort(); // sort a list
    display(list1);
    list1.reverse(); // reverse a list
    display(list1);

    // // create list using pointer
    list<int> list2(3); // empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 10;
    iter++;
    *iter = 20;
    iter++;
    *iter = 30;
    iter++;
    display(list2);

    // mearg two list
    list1.merge(list2);
    cout << "after merging a list";
    display(list1);

    return 0;
}