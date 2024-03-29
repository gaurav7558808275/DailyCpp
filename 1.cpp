#include <iostream>
#include <string.h>
using namespace std;

class Simple
{

    private : 
    string name;

    public :     
    void UpdateName(string name)
    {
        this->name = name;
    }

    string Getname(void)
    {
        return this->name;
    }
};



int main(void)
{
    Simple s;
    s.UpdateName("gaurav");
    cout << "name is " << s.Getname() << endl;
    return 0;

}