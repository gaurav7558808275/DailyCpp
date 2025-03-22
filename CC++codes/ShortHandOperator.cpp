#include <iostream>

using namespace std;


class marks{
int mark;
public:
    marks()
    {   
        mark =0;
    }
    marks(int m)
    {
        mark = m;
    }

    int operator+=(int m)
    {
        return mark + m;  
    }
    friend int operator-=(marks &ptr , int m);

    int operator++()
    {
        return mark+= 1;
    }
    int operator++(int m)
    {
        return mark+= 1;
    }
    int operator--()
    {
        return mark-= 1;
    }

    void display()
    {
        cout <<"marks: " << mark << endl;
    }

};

int operator-=(marks &ptr, int m)
{
        return ptr.mark - m;      }


int main()
{
    marks m(50);
    m+= 20;
    m.display();
    m-= 20;
    m.display();
    ++m;
    m++;
    m.display();
    --m;
    --m;
    m.display();
}
