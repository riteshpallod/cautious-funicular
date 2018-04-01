#include <iostream>
using namespace std;

char to_upper(char x)
{
    if (x >= 'a' && x <= 'z') 
        return x + 'A' - 'a';
    return x; 
}

char to_lower(char x)
{
    if (x >= 'A' && x <= 'Z') 
        return x - ('A' - 'a');
    return x; 
}

int main()
{
    char chota = 'x', bada = 'M';
    cout << to_upper(chota) << endl;
    cout << to_lower(bada) << endl;
    return 0;
}