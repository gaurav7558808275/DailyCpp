#include<bits/stdc++.h>


int main()
{
    std::array<int, 5> a{1,2,6,5,3};  // here in C++ you need to specify the type and size. like  in C "arr[10]";

    std::array<std::string,3> cb = {"fhkuebh","dwiugfd","fdhiwuhiuh"};


#if 0    
    
    for(auto i:b)
    {
        std::cout << " " << i <<std::endl;
    }

    std::cout << a.size() << std::endl;

    for(auto i = a.begin() ; i != a.end() ; ++i)
    {
        std::cout << *i <<std::endl;
    }
#endif

    std::array<std::string , 3> b{"gaurav", "Learning", "TheSTL library"};

    std::cout << b.data();


    






}