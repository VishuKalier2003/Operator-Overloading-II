// Implementation of Operator Overloading as a Friend Function...
#include <iostream>
using namespace std;
class Overload
{
    public:
        int data;
        Overload ()      // Default Constructor
        { data = 0; }
        Overload (int val)   // Parametrized Constructor
        { data = val; }
    public:
        friend Overload operator ++ (Overload &obj);   // Friend function prototype
};
Overload operator ++ (Overload &obj)   // Function definition
{
    obj.data = obj.data + 1;   // Increment by one
    return obj;
}
int main()
{
    Overload object, object1(18);
    cout << "After Increment : " << ++object.data << endl;
    cout << "After Increment : " << ++object1.data << endl;
}