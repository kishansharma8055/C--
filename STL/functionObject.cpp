#include <iostream>
#include <functional>
// #include <string>
using namespace std;

int main()
{
    // function objects(functor) :- function wrapped in a class so that it available like an object
    int arr[] = {11, 3, 54, 6, 10, 23};

    // function object or functor obth are same
    // here is a greater is a functor
    sort(arr, arr + 5, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}