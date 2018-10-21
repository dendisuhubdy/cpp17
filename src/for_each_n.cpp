#include <algorithm>
#include <iostream>
#include <list>
#include <numeric>
#include <random>
#include <vector>

using namespace std;

int main()
{
    vector<int> data(20);
    iota(begin(data), end(data), 1);

    for_each_n(begin(data), 5,[](const auto& value)
    {
        cout << value << '\n';
    }); 
}
