#include <iostream>
using namespace std;

int strstr(string str, string substr)
{
    int len = str.length(), substr_len = substr.length();

    for (int i = 0; i < len - substr_len + 1; i++)
    {   
        int flag = 1; //mila
        for (int j = 0; j < substr_len; j++)
        {
            if (str[i+j] != substr[j]) flag = 0;
        }
        if (flag == 1) return i;
    }
    return -1;
}

int main()
{
    string str = "abrachintukadabrapantuchintyuch";
    string substr = "chinty";
    cout << "substring found at index = " << strstr(str, substr) << endl;
    return 0;
}