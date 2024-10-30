#include <iostream>
#include <vector>
using namespace std;

void insertionsort(vector<int>& vec) {
    for (int i = 1; i < vec.size(); i++) {
        while (i > 0 && vec[i] < vec[i - 1]) {
            vec[i] = vec[i-1];
            i--;
        }
    }
}

void arruarr(vector<int>& vec1,  vector<int>& vec2) {
    // Create a new vector to store the merged elements
    vector<int> final = vec1;
    final.insert(final.end(), vec2.begin(), vec2.end());

    insertionsort(final);

    for (size_t i = 0; i < final.size() - 1; i++) {
        if (final[i] == final[i + 1]) {
            final.erase(final.begin() + i);
            i--; 
        }
    }
    for (const int& num : final) {
        cout << num << " ";
    }
}

int main() {
    vector<int> vec1 = {1, 2, 3, 4, 5, 6};
    vector<int> vec2 = {4, 5, 6, 7, 8, 9};

    arruarr(vec1, vec2);
    return 0;
}
