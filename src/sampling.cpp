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
    copy(cbegin(data), cend(data), ostream_iterator<int>(cout, " "));
    cout << '\n';

    random_device seeder;
    const auto seed = seeder.entropy() ? seeder() : time(nullptr);
    default_random_engine generator(
           static_cast<default_random_engine::result_type>(seed));

    const size_t numberOfSamples = 5;
    vector<int> sampledData(numberOfSamples);

    for (size_t i = 0; i < 10; ++i)
    {
        sample(cbegin(data), cend(data), begin(sampledData),
               numberOfSamples, generator);
        copy(cbegin(sampledData), cend(sampledData),
             ostream_iterator<int>(cout, " "));
        cout << '\n';
    }
    return 0;
}
