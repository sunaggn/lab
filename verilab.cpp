#include <iostream>
#include <chrono>
#include <cstdlib>

using namespace std;

int main()
{
    int m = 10;
    int arr[m];

    srand(static_cast<unsigned int>(chrono::system_clock::now().time_since_epoch().count()));

    for (int i = 0; i < m; i++)
    {
        arr[i] = rand() % 10 + 1;
    }
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    auto start_time = chrono::high_resolution_clock::now();
    auto end_time = chrono ::high_resolution_clock ::now();
    chrono::duration<double> elapsed_seconds = end_time - start_time;
    cout << "Elapsed time: " << elapsed_seconds.count() << "seconds " << endl;
    return 0;
}