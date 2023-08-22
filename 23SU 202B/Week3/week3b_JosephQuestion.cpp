//#include <iostream>
//#include <string>
//#include <queue>
//
//int main () {
//    int m;
//    int n;
//
//    std::queue<int> q;
//    std::string output;
//
//    std::cin >> n >> m;
//
//    for (int i = 1; i <= n; i++) {
//        q.push(i);
//
//    }
//
//    if (m == 1) {
//        for (int i = 1; i <= n; i++) {
//            std::cout << i << " ";
//        }
//        return 0;
//    }
//
//    for (int j = 0; !q.empty(); j++) {
//        if (j == (m-1)) {
//            output+= std::to_string(q.front()) + " ";
//            q.pop();
//            j = 0;
//        }
//        q.push(q.front());
//        q.pop();
//
//    }
//
//    std::cout << output << std::endl;
//
//}