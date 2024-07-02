#include <iostream>

using namespace std;

class simple
{
    int bums;
    int nums;
public:

    simple()
    {
        bums = 0;
        nums = 0;
    }
    simple(int Bums, int Nums)
    {
        bums = Bums;
        nums = Nums;
    }
    void display(){
        cout << "bums : " << bums << endl;
        cout << "nums : " << nums << endl;
    }

    simple operator+(simple m)
    {
        simple temp;
        temp.bums = bums + m.bums;
        temp.nums = nums + m.nums;
        return temp;
    }
simple operator-(simple m);

};

simple simple::operator-(simple m)
{
    simple temp;
    temp.bums = bums - m.bums;
    temp.nums = nums - m.nums;

}

int main()
{
    simple s1(1,2),s2(3,2);
    //s1.display();
    simple m = s1+s2;
    simple n = s1-s2;
    m.display();
    n.display();




    return 0;


}