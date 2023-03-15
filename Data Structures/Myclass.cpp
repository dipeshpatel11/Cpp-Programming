#include <iostream>
using namespace std;
// class MyClass
// {
// private:
//     int m_Member;
// public:
//     MyClass() = default;
//     MyClass(const MyClass& rhs) = default;
// };
// int main() {
//     MyClass objectA;
//     MyClass objectB(MyClass());
//     return 0;
// }
class MyClass
{
private:
    int m_Member;
public:
    MyClass() = default;
    MyClass(const MyClass& rhs) = default;
    
};
int main() {
    MyClass objectA;
    MyClass objectB{MyClass{}};
    cout<<"K";
    
return 0; }
