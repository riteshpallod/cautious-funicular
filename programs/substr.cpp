#include <iostream>
using namespace std;

string substr(string str, int start, int end)
{   
    string sub = "";
    if (end > str.length()) return sub;

    for (int i = start; i < end; i++)
    {
        sub += str[i];
    }
    return sub;
}
int main()
{
    string str = "riteshpallod";
    string substring = substr(str, 1, 8);
    cout << substring << endl;
    return 0;
}