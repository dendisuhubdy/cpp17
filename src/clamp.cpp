#include <algorithm>
#include <iostream>
#include <list>
#include <numeric>
#include <random>
#include <vector>


using namespace std;

int main()
{
    const int low = -32'768;
    const int high = 32'767;
    cout << clamp(12'000, low, high) << '\n';
    cout << clamp(-36'000, low, high) << '\n';
    cout << clamp(40'000, low, high) << '\n';
}
