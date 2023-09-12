#include <iostream>
#include <queue>
#include <sstream>
#include <iterator>
#include <algorithm>
int n;
int m;
bool conn[10069][10069];
bool visited[10069];
std::string outString = "";

int bfs() {
    int output = 0;
    std::queue<std::pair<int,std::vector<std::string>>> q;
    std::vector<std::string> tempVI;
    tempVI.push_back("1");
    q.push(std::make_pair(1,tempVI));
    while (!q.empty()) {
        int tempX = q.front().first;
        std::vector<std::string> step = q.front().second;
        for (int i = 0; i < step.size(); i++) {
            std::cout << step[i] + " | ";
        }
        std::cout << std::endl;
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (conn[tempX][i]) {
//                std::string tempString = std::to_string(tempX) + " " + std::to_string(i);
//                std::string tempString2 = std::to_string(i) + " " + std::to_string(tempX);
                std::string tempString = std::to_string(tempX) + " " + std::to_string(i);
                std::string tempString2 = std::to_string(i) + " " + std::to_string(tempX);
                bool one = std::find(step.begin(), step.end(), tempString) == step.end();
                bool two = std::find(step.begin(), step.end(), tempString2) == step.end();
                if (one && two) {
                    std::vector<std::string> pushVector(step.begin(), step.end());

                    pushVector.push_back(tempString);
                    q.push(std::make_pair(i, pushVector));
                    if (i == n) {
                        output++;
                        if (std::equal(outString.begin(), outString.end(),"")) {
                            for (int i = 0; i < step.size(); i++) {
                                outString+=step[i];
                            }
                            outString+=tempString;
                        }
                     }
                }
            }
        }
    }
    return output;
}

std::string formatString (std::string input) {
    std::stringstream ss(input);
    std::string word;
    std::vector<std::string> splitter;
    while (ss >> word) {
       splitter.push_back(word);
    }
    word = "";
    for (int i = 0; i < splitter.size()-1; i++) {
        splitter[i] = splitter[i].substr(0,splitter.size()/2);
        word+=splitter[i] + " ";
    }
    return word;
}

int main () {
    std::cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a;
        int b;
        std::cin >> a >> b;
        conn[a][b] = true;
        conn[b][a]  = true;
    }
    int x = bfs();
    std::cout << x << std::endl;
    if (x == 0) {
        std::cout << "IMPOSSIBLE" << std::endl;
        return 0;
    }
    std::cout << formatString(outString) << std::to_string(n) << std::endl;


}
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <stack>
//
//using namespace std;
//
//const int MAX_N = 100005;
//vector<int> adj[MAX_N];
//int parent[MAX_N];
//
//void bfs(int n) {
//    queue<int> q;
//    q.push(1);
//
//    while (!q.empty()) {
//        int u = q.front();
//        q.pop();
//
//        for (int v : adj[u]) {
//            if (parent[v] == 0) {
//                parent[v] = u;
//                q.push(v);
//            }
//        }
//    }
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    for (int i = 1; i <= m; ++i) {
//        int a, b;
//        cin >> a >> b;
//        adj[a].push_back(b);
//        adj[b].push_back(a);
//    }
//
//    // Initialize parent array to 0
//    for (int i = 1; i <= n; ++i) {
//        parent[i] = 0;
//    }
//
//    bfs(n);
//
//    if (parent[n] == 0) {
//        cout << "IMPOSSIBLE\n";
//    } else {
//        stack<int> path;
//        int u = n;
//
//        while (u != 0) {
//            path.push(u);
//            u = parent[u];
//        }
//
//        cout << path.size() << '\n';
//        while (!path.empty()) {
//            cout << path.top() << ' ';
//            path.pop();
//        }
//        cout << '\n';
//    }
//
//    return 0;
//}
