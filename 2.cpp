#include <iostream>
using namespace std;

// Learned about constructors
// learned about function overloading

class lol
{
    private : 
    
    int a;
    int b;

    public :
    // constructor function
    lol(int a, int b) 
    { 
        this->a = a;
        this->b = b;
    }
    int Add()
    {
        return (this->a + this->b);
    }


};

int main (void)
{
    lol s(10,20);
    cout << "Its working addition " << endl;
    return 0;
}