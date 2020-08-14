#include <iostream>
using namespace std;

class Person
{
public:
    int m_a;
    int m_b;
public:
    Person operator+(const Person &p)
    {
        Person temp;
        temp.m_a = this->m_a + p.m_a;
        temp.m_b = this->m_b + p.m_b;
        return temp;
    }
};

// Person operator+(const Person &p1,const Person &p2){
//     Person temp;
//     temp.m_a=p1.m_a+p2.m_a;
//     temp.m_b=p1.m_b+p2.m_b;
//     return temp;

// }

void test01()
{
    Person p1;
    p1.m_a = 10;
    p1.m_b = 10;
    Person p2;
    p2.m_a = 10;
    p2.m_b = 10;
    Person p3 = p1.operator+(p2);
    // Person p3=p1+p2;
    cout << p3.m_a << endl;
    cout << p3.m_b << endl;
}

int main()
{
    test01();
    system("pause");
}
