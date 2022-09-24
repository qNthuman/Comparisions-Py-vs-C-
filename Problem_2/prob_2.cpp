#include <iostream>

using namespace std;
string EXECUTION = "2.803 seconds";
int count = 0;

string replicator(int a, string str)
// since c++ does not have inbuilt function to replicate istelf like python has this function is created.
{
    for (a; a > count; a--)
    {
        cout << str;
    }
    return str;
}

string pattern(string str, int i)
{
    for (i; i > count; i--)
    {
       replicator(i,str);
       cout<<endl;
    }
    return str;
}

int main()
{
    pattern("*",4);
}

/*doesnt seem to be best way ?  
Create an Issue and give out the best way 
*/