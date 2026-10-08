#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> taxi;

    // Adding taxis to queue
    taxi.push("Taxi 101");
    taxi.push("Taxi 102");
    taxi.push("Taxi 103");

    cout << "Taxi Queue:" << endl;

    // Display and remove taxis
    while (!taxi.empty())
    {
        cout << taxi.front() << " is assigned" << endl;
        taxi.pop();
    }

    return 0;
}
