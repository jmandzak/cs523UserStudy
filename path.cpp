// WRITEUP

/*
    You will be given a graph in the form of a vector of strings, where the strings
    will contain the characters '0' and '1'. '0' indicates a square that you can travel on,
    while '1' indicates a wall that you cannot travel accross. An example of this graph would look like

    "010100101"
    "001010101"
    "000001010"
    "110100000"

    Nodes should be numbered from 0 to N-1, where N is the number of nodes. Nodes should be numbered
    sequentially, so the above graph should look like

    0,  1,  2,  3,  4,  5,  6,  7,  8
    9,  10, 11, 12, 13, 14, 15, 16, 17
    ...

    You will be tasked with implementing several different functions, including one that builds
    an adjacency list out of this vector of strings, and three different ways of finding the shortest
    path from node 0 to node N-1 where N is the number of nodes. These functions will include DFS, BFS,
    and Dijkstra's algorithm. Each of these functions should return the shortest path as a vector of nodes
    numbered appropriately.

    The three pathfinding functions can be tested on their correctness by running make, then ./test.
    
    You may use additional helper functions or classes should you so choose, but you may not make 
    modifications to the provided class

    You may assume that node 0 and node N-1 are ALWAYS 0, and that there is ALWAYS a possible path from 0 to N-1.
    A valid movement is up, down, left, or right. You may NOT travel diagonally.

*/

#include <vector>
#include <string>

using namespace std;

class UltimatePathFinder {
  public:
    vector<int> dfs_shortest_path(vector<string> const &v);
    vector<int> bfs_shortest_path(vector<string> const &v);
    vector<int> dijkstra_shortest_path(vector<string> const &v);
};


/*
    This function finds and returns the shortest path using 
    Depth First Search from node 0 to node N-1, where N 
    is the number of nodes 
*/
vector<int> UltimatePathFinder::dfs_shortest_path(vector<string> const &v) {
    vector<int> rv;

    return rv;
}


/*
    This function finds and returns the shortest path using 
    Breadth First Search from node 0 to node N-1, where N 
    is the number of nodes 
*/
vector<int> UltimatePathFinder::bfs_shortest_path(vector<string> const &v) {
    vector<int> rv;

    return rv;
}


/*
    This function finds and returns the shortest path using 
    dijkstra's algorithm from node 0 to node N-1, where N 
    is the number of nodes 
*/
vector<int> UltimatePathFinder::dijkstra_shortest_path(vector<string> const &v) {
    vector<int> rv;

    return rv;
}