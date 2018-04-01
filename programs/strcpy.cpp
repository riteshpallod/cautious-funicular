#include <iostream>
using namespace std;

char* strcpy(char *destination, const char *source)
{
    char *sendthis = destination;

    while(*source != '\0')
    {
        *destination = *source;
        source++; destination++;
    }
    //cout << "meech aahe" << endl;
    return sendthis;
}
int main()
{
    char *dest = new char(200);
    const char *src = "edward_elrich";
    dest = strcpy(dest, src);
    cout << dest << endl;
    return 0;
}