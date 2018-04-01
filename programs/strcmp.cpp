#include <iostream>
using namespace std;

int strcmp(const char *str1, const char *str2)
{
    int flag = 0;

    while(*str1 == *str2) 
    {
        if (*str1 == '\0')
            return 0;
        str1++; str2++;        
    }
    if (*str1 > *str2) return 1;
    return -1;
}
int main()
{
    const char *str1 = "elrich_edward";
    const char *str2 = "elrich_hapus";
    int flag = strcmp(str2,str1);
    if (flag == 0) cout << "strings are same" << endl;
    else if (flag > 0) cout << "string1 is superior" << endl;
    else cout << "string2 is superior" << endl;
    return 0;
}