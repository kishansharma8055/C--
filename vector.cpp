// //vector and template
// #include <iostream>
// #include <vector>

// using namespace std;
// template <class T>
// void display(vector<T> &v)
// {
//     cout << "display the vector ";
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//         // or
//         cout << v.at(i) << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     // ways to create a vector
//     vector<int> vec1; // zero length vector
//     // vec1.pop_back();
//     // vector<int>::iterator iter = vec1.begin();
//     // // vec1.insert(iter + 2, 5, 120);
//     // display(vec1);

//     vector<char> vec2(4); // 4 element charactor vector
//     // display(vec1);

//     vector<char> vec3(vec2); // 4 element charactor vector from vec2
//     // display(vec3);

//     vector<int> vec4(6, 3); // 6 element vector in 3s
//     display(vec4);
//     cout << vec4.size();

//     int n, s;
//     // cout << "ener size ";
//     // cin >> s;
//     // for (int i = 0; i < s; i++)
//     // {
//     //     cout << "ener a number ";
//     //     cin >> n;
//     //     vec1.push_back(n);
//     // }

//     return 0;
// }
//
//
//
//
//
//
//
//
// // class template
// #include <iostream>
// #include <vector>
// using namespace std;

// template <class T>
// class TamplateClass
// {
//     T a, b;

// public:
//     TamplateClass(T x, T y)
//     {
//         a = x;
//         b = y;
//     }
//     void show()
//     {
//         cout << a << " and " << b << endl;
//     }
// };

// int main()
// {
//     TamplateClass<int> obj1(10, 20);
//     obj1.show();

//     TamplateClass<float> obj2(1.2, 2.3);
//     obj2.show();

//     // float c, d;
//     // cout << "enter two float num ";
//     // cin >> c >> d;
//     // sum(c, d);

//     // char e, f;
//     // cout << "enter two char num ";
//     // cin >> e >> f;
//     // sum(e, f);

//     return 0;
// }