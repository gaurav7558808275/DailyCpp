#include <bits/stdc++.h>

void printvector(const std::vector<int> &name)
{
    for(int i =0 ; i < name.size() ; i++)
    {
        std::cout << " " << name[i] << std::endl; 
    }
}


int main()
{   

    std::vector<int> a = {1,3,2,5,4,6};
#if 0
    std::cout << " " <<a.at(2);


    // travesing through a vector

    for(int i =0 ; i < a.size() ; i++)
    {
        std::cout << " " << a[i] << std::endl; 
    }

    for(auto i : a)
    {
        std::cout << " "  <<  i << std::endl;
    }


    for(auto it = a.begin(); it!= a.end(); it++)
    {
        std::cout << " "<< *it << std::endl;
    }

 // using reverse iterator we can print in reverse

 for(auto it = a.rbegin() ; it!= a.rend(); ++it )
 {
    std::cout << " " << *it << std::endl;
 }


for(auto it = a.begin() ; it!= a.end(); ++it )
{
    std::cout << " " << *it;
}
std::cout << std::endl;

 // sorting of a vector bubble sort

 for(int i = 0 ; i < a.size() -1 ; i++)
 {
    for(int j = 1 ; j < a.size() -i -1 ; j ++)
    {
        if(a[j] > a[j+1])
        {
            int temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
        }
    }
 }

 for(auto it = a.begin() ; it!= a.end(); ++it )
 {
    std::cout << " " << *it;
 }
 std::cout << std::endl;


// by using the sort function

for(auto it = a.begin() ; it!= a.end(); ++it )
{
    std::cout << " " << *it;
}
std::cout << std::endl;

sort(a.begin(), a.end());

for(auto it = a.begin() ; it!= a.end(); ++it )
{
    std::cout << " " << *it;
}

#endif





}