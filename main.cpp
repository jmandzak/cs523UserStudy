#include <iostream>
#include <vector>
#include <algorithm>
#include "sort.cpp"

using namespace std;

int main() {
    int correct;
    vector<double> v0 = {4, 901921, 2, -1290, 8.3, 9.1, 18};
    vector<double> v1 = {};
    vector<double> v2 = {1};
    vector<double> v3 = {-9, 9, 8, -8, -7, 7, 6, -6, 5, -5, -4, 4, 3, -3, 2, -2, 1, -1, 0.01, -0.01};
    vector<double> v4 = {-9, 9, 8, -8, -7, 7, 6, -6, 5, -5, -4, 4, 3, -3, 2, -2, 1, -1, 0.01, -0.01, -9, 9, 8, -8, -7, 7, 6, -6, 5, -5, -4, 4, 3, -3, 2, -2, 1, -1, 0.01, -0.01, -9, 9, 8, -8, -7, 7, 6, -6, 5, -5, -4, 4, 3, -3, 2, -2, 1, -1, 0.01, -0.01, -9, 9, 8, -8, -7, 7, 6, -6, 5, -5, -4, 4, 3, -3, 2, -2, 1, -1, 0.01, -0.01};

    vector< vector<double> > all;
    all.push_back(v0);
    all.push_back(v1);
    all.push_back(v2);
    all.push_back(v3);
    all.push_back(v4);

    UltimateSort s;
    correct = 0;

    cout << "TESTING QUICK SORT\n";
    for(int i = 0; i < all.size(); i++) {
        vector<double> rv = s.quick_sort(all[i]);
        vector<double> rv_sorted = all[i];
        sort(rv_sorted.begin(), rv_sorted.end());
        if(rv_sorted == rv) {
            cout << "Test " << i << "/5 passed.\n";
            correct++;
        }
        else cout << "Test " << i << "/5 FAILED.\n";
    }
    cout << "\n";

    cout << "TESTING MERGE SORT\n";
    for(int i = 0; i < all.size(); i++) {
        vector<double> rv = s.merge_sort(all[i]);
        vector<double> rv_sorted = all[i];
        sort(rv_sorted.begin(), rv_sorted.end());
        if(rv_sorted == rv) {
            cout << "Test " << i << "/5 passed.\n";
            correct++;
        }
        else cout << "Test " << i << "/5 FAILED.\n";
    }
    cout << "\n";

    cout << "TESTING BUBBLE SORT\n";
    for(int i = 0; i < all.size(); i++) {
        vector<double> rv = s.bubble_sort(all[i]);
        vector<double> rv_sorted = all[i];
        sort(rv_sorted.begin(), rv_sorted.end());
        if(rv_sorted == rv) {
            cout << "Test " << i << "/5 passed.\n";
            correct++;
        }
        else cout << "Test " << i << "/5 FAILED.\n";
    }
    cout << "\n";

    cout << "TESTING INSERTION SORT\n";
    for(int i = 0; i < all.size(); i++) {
        vector<double> rv = s.insertion_sort(all[i]);
        vector<double> rv_sorted = all[i];
        sort(rv_sorted.begin(), rv_sorted.end());
        if(rv_sorted == rv) {
            cout << "Test " << i << "/5 passed.\n";
            correct++;
        }
        else cout << "Test " << i << "/5 FAILED.\n";
    }
    cout << "\n";

    cout << "TESTING SELECTION SORT\n";
    for(int i = 0; i < all.size(); i++) {
        vector<double> rv = s.selection_sort(all[i]);
        vector<double> rv_sorted = all[i];
        sort(rv_sorted.begin(), rv_sorted.end());
        if(rv_sorted == rv) {
            cout << "Test " << i << "/5 passed.\n";
            correct++;
        }
        else cout << "Test " << i << "/5 FAILED.\n";
    }

    cout << "\n";
    cout << "You got " << correct << "/25 problems correct.\n";

}