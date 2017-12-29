#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void print(vector<int> data)
{
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << "\t";
    }
    cout << endl;
}

void span1(vector<int> prices)
{
    vector<int> span(prices.size());
    span[0] = 1;

    for (int i = 1; i  < prices.size(); i++)
    {   
        span[i] = 1;

        for (int j = i-1; j >= 0 && (prices[i] >= prices[j]); j--)
        {
            span[i]++;
        }
    }
    cout << "span is:\t\t";
    print(span);    
}

int main()
{
    vector<int> prices;
    prices.insert(prices.end(), {78,111,21,46,51,78,89,81,100,102});
    cout << "prices are:\t\t";
    print(prices);
    span1(prices);
    return 0;
}