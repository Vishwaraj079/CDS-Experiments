#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

void linear(int n) {
    for (int i = 0; i < n; i++);
}

void quadratic(int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    auto start = high_resolution_clock::now();
    quadratic(n); // Try linear(n) to compare
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Execution time: " << duration.count() << " microseconds" << endl;

    return 0;
}

