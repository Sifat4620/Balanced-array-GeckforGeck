#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N = 4;
    vector<int> arr = {1, 5, 3, 2};


    int firstHalfSum = 0;
    int secondHalfSum = 0;

    for (int i = 0; i < N / 2; i++) {
        firstHalfSum += arr[i];
    }

    for (int i = N / 2; i < N; i++) {
        secondHalfSum += arr[i];
    }


    int diff = abs(firstHalfSum - secondHalfSum);


    int elementToAdd = diff;

    cout << "To make the array balanced, you can add " << elementToAdd << endl;

    return 0;
}
