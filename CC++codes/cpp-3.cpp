#include <iostream>
using namespace std;

// OPERATOR FUNCTION EXPLANATION
struct Ytchannel{

string Name;
int Subs;

Ytchannel(string name, int subs)
{
    Name = name;
    Subs = subs;
}

};

ostream& operator<<(ostream &COUT,Ytchannel &Ch)
{
    COUT << "Name : " << Ch.Name << endl;
    COUT << "Subs : " << Ch.Subs << endl;
    return COUT;
}

int main(){

Ytchannel ch1("gauravs fresh",20);
Ytchannel ch2("gauravs old",70);
cout << ch1 <<ch2 ;



}



