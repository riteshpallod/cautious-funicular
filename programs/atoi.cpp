#include <iostream>
#include <typeinfo>

using namespace std;
/*
input: number in string format
output: number in int format
*/

int atoi(string number)
{
    int number_in_int = 0;
    int i = 0;
    while(number[i]!='\0')
    {
        number_in_int = number_in_int*10 + (number[i] - '0'); 
        i++;
    }

    return number_in_int;
    
}

int main()
{
    string x = "56128";
    int x_int = atoi(x);
    cout << x << ":" << typeid(x).name() << endl;
    cout << x_int << ":" << typeid(x_int).name() << endl;
    return 0;
}