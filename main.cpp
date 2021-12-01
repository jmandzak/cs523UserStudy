#include <iostream>
#include <vector>
#include <algorithm>
#include "path.cpp"

using namespace std;

int main() {
    int correct;
    int i;

    vector<string> g0 = {
        "01",
        "00"
    };
    vector<int> a0 = {0,2,3};

    vector<string> g1 = {
        "010001",
        "010101",
        "010101",
        "000000"
    };
    vector<int> a1 = {0,6,12,18,19,20,21,22,23};

    vector<string> g2 = {
        "0001010",
        "0100011",
        "0101010",
        "0110011",
        "1010111",
        "1110000"
    };
    vector<int> a2 = {0,1,2,9,10,11,18,25,24,31,38,39,40,41};

    vector<string> g3 = {
        "0111100010000001",
        "0000001010110110",
        "0000110000010000"
    };
    vector<int> a3 = {0,16,17,18,19,20,21,5,6,7,23,39,40,41,25,9,10,11,12,28,44,45,46,47};

    vector<string> g4 = {
        "01111111",
        "00111111",
        "10011111",
        "11001111",
        "11100111",
        "11110011",
        "11111001",
        "11111100"
    };
    vector<int> a4 = {0,8,9,17,18,26,27,35,36,44,45,53,54,62,63};

    vector< vector<string> > all_g;
    all_g.push_back(g0);
    all_g.push_back(g1);
    all_g.push_back(g2);
    all_g.push_back(g3);
    all_g.push_back(g4);

    vector< vector<int> > all_a;
    all_a.push_back(a0);
    all_a.push_back(a1);
    all_a.push_back(a2);
    all_a.push_back(a3);
    all_a.push_back(a4);

    UltimatePathFinder p;
    correct = 0;

    cout << "TESTING DFS\n";
    for(i = 0; i < all_g.size(); i++) {
        vector<int> result = p.dfs_shortest_path(all_g[i]);
        if(result == all_a[i] || result.size() == all_a[i].size()) {
            cout << "Test " << i + 1 << "/5 passed.\n";
            correct++;
        }
        else cout << "Test " << i + 1 << "/5 FAILED.\n";
    }
    cout << '\n';

    cout << "TESTING BFS\n";
    for(i = 0; i < all_g.size(); i++) {
        vector<int> result = p.bfs_shortest_path(all_g[i]);
        if(result == all_a[i] || result.size() == all_a[i].size()) {
            cout << "Test " << i + 1 << "/5 passed.\n";
            correct++;
        }
        else cout << "Test " << i + 1 << "/5 FAILED.\n";
    }
    cout << '\n';

    cout << "TESTING DIJKSTRA'S\n";
    for(i = 0; i < all_g.size(); i++) {
        vector<int> result = p.dijkstra_shortest_path(all_g[i]);
        if(result == all_a[i] || result.size() == all_a[i].size()) {
            cout << "Test " << i + 1 << "/5 passed.\n";
            correct++;
        }
        else cout << "Test " << i + 1 << "/5 FAILED.\n";
    }

    cout << "\n";
    cout << "You got " << correct << "/25 problems correct.\n";
}
