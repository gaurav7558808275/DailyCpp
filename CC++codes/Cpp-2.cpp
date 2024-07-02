#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel{
    
public:
    string name;
    string owner;
    int subs;
    list<string> Publishedvids;

    // constructor
    YoutubeChannel(string name, string ownerName)
    {
        name = name;
        owner = ownerName;
        subs = 0;
    }
    // printall
    void Getinfo(void)
    {
        cout<<"name : "<< name << endl;
        cout<<"owner : "<< owner << endl;
        cout<<"subs : "<< subs << endl;
        cout<<"Videos:"<< endl;
        for(auto i : Publishedvids )
        {
            cout << i << endl;
        }
    }
    
};


int main()
{
    YoutubeChannel ch1("YoutubeRocks","gaurav");
    ch1.Publishedvids.push_back("1st video");
    ch1.Publishedvids.push_back("2nd video");
    ch1.Publishedvids.push_back("3rd video");


    YoutubeChannel ch2("YoutubeSings","ganu");
    ch2.Publishedvids.push_back("1st video sings");
    ch2.Publishedvids.push_back("2nd video sings");
    ch2.Publishedvids.push_back("3rd videosings");

ch1.Getinfo();
ch2.Getinfo();


/*
    cout<<"name : "<< ch1.name << endl;
    cout<<"owner : "<< ch1.owner << endl;
    cout<<"subs : "<< ch1.subs << endl;
    cout<<"Videos:"<< endl;
    for(auto i : ch1.Publishedvids )
    {
        cout << i << endl;
    }

     cout<<"name : "<< ch2.name << endl;
    cout<<"owner : "<< ch2.owner << endl;
    cout<<"subs : "<< ch2.subs << endl;
    cout<<"Videos:"<< endl;
    for(auto i : ch2.Publishedvids )
    {
        cout << i << endl;
    }
*/
}