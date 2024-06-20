#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel{
    
public:
    string name;
    string owner;
    int subs;
    list<string> Publishedvids;
};

int main()
{
    YoutubeChannel ch;
    ch.name = "truman showman";
    ch.owner = "Blebleblebe";
    ch.subs = 20;
    ch.Publishedvids = {"1","2","3"};

    
    cout<<"name : "<< ch.name << endl;
    cout<<"owner : "<< ch.owner << endl;
    cout<<"subs : "<< ch.subs << endl;
    cout<<"Videos:"<< endl;
    for(auto i : ch.Publishedvids )
    {
        cout << i << endl;
    }
    

    //system("pause>0");
}