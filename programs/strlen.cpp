#include <iostream>
using namespace std;

int strlen(string str)
{
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

int main()
{
    string str = "nanaifal";
    cout << "length = " << strlen(str) << endl;
    return 0;
}
