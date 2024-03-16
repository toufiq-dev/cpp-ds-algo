#include <bits/stdc++.h>
using namespace std;

int shortestPath(string s) {
    int x = 0, y = 0;
    for (char ch : s) {
        if (ch == 'E') {
            x--;
        } else if (ch == 'W') {
            x++;
        } else if (ch == 'N') {
            y++;
        } else {
            y--;
        }
    }

    return sqrt(x * x + y * y);
}

int main() {
    string s = "WNEENESENNN";

    int path = shortestPath(s);

    cout << path;

    return 0;
}

// Given a route containing 4 directions (E, W, N, S), find the shortest path to reach destination.
