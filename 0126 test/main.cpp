#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>

//問1
//class Point
//{
//private:
//    int x;
//    int y;
//
//    Point()
//    {
//        x = 1;
//        y = 1;
//    }
//
//    ~Point()
//    {
//        x = 0;
//        x = 0;
//    }
//};
//
////問2
//
//void main()
//{
//    int* newInt = new int;
//    delete newInt;
//    int* Array = new int[1000];
//    delete[] Array;
//}
//
////問3
//class Test
//{
//public:
//    Test()
//    {
//        printf("Test\n");
//    }
//    ~Test()
//    {
//        printf("~Test\n");
//    }
//};
//class Test2 : public Test
//{
//public:
//    ~Test2()
//    {
//        printf("~Test2\n");
//    }
//    Test2()
//    {
//        printf("Test2\n");
//    }
//};
//int main()
//{
//    Test* t;
//    t = new Test2();
//
//    delete t;
//    return 0;
//}
//
//問4
//template <typename T>
//T Calc(T a, T b, T type)
//{
//    float ans = 0;
//    switch (type)
//    {
//    case 0:
//        ans = a + b;
//        break;
//    case 1:
//        ans = a - b;
//        break;
//    case 2:
//        ans = a * b;
//        break;
//    case 3:
//        ans = a / b;
//        break;
//    }
//
//    return ans;
//}
//
//int main()
//{
//    int ans1;
//    float ans2;
//    char ans3;
//
//    ans1 = Calc<int>(2, 5, 0);
//    ans2 = Calc<float>(10.0f, 2.5f, 3);
//    ans3 = Calc<char>(10, 4, 2);
//
//    return 0;
//}

////問5
//int main()
//{
//    std::list<int> lst;
//    for (int i = 0; i < 5; ++i)
//    {
//        // ここにプログラムを記述
//        std::list<int> lst{ 50, 40, 30 ,20 ,10 };
//    }
//
//    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
//    {
//        printf("num = %d\n", *it);
//        std::list<int> lst(1, 30);
//    }
//    // リストを修正してnum=30と表示されるようにプログラムを記述
//    
//    return 0;
//}

////問6
//int main()
//{
//    std::vector<int> lst;
//    for (int i = 0; i < 5; ++i)
//    {
//        // ここにプログラムを記述
//        std::list<int> lst{ 50, 40, 30 ,20 ,10 };
//    }
//
//    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
//    {
//        printf("num = %d\n", *it);
//        std::list<int> lst(1, 30);
//    }
//    // リストを修正してnum=30と表示されるようにプログラムを記述
//
//    return 0;
//}