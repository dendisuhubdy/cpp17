#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> data(20);
    iota(begin(data), end(data), 1);
    copy(cbegin(data), cend(data), ostream_iterator<int>(cout, " "));
    cout << '\n';
}
