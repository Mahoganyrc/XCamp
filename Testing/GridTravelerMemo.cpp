//#include <iostream>
//#include <unordered_map>
//#include <string>
//#include <iomanip>
//#include <chrono>
//#include <functional>
//
//
//int inputM;
//int inputN;
//bool visited[1000][1000];
//int count = 0;
//
//
//
//void findPossible (int x, int y) {
//    if (x == inputM-1 && y == inputN-1) {
//        count++;
//        return;
//    }
//    if ( x < 0 || y < 0 || y >= inputN || x >= inputM || visited[x][y] ) {
//        return;
//    }
//
//    visited[x][y] = true;
//    findPossible(x+1,y);
//    findPossible(x,y+1);
//    visited[x][y] = false;
//}
//
//int otherVersion (int m, int n) {
//    if (n == 0 || m == 0) {
//        return 0;
//    }
//    if (n == 1 || m == 1) {
//        return 1;
//    }
//    return otherVersion(m-1,n) + otherVersion(m,n-1);
//
//}
//
//long long memoVersion (int m, int n,std::unordered_map<std::string,long long> &Memo) {
//    std::string key = std::to_string(m) + "," + std::to_string(n);
//    if (n == 0 || m == 0) {
//        return 0;
//    }
//    if (n == 1 || m == 1) {
//        return 1;
//    }
//
//    if (Memo.count(key) == 1) {
//        return Memo[key];
//    }
//
//    long long x = memoVersion(m-1,n,Memo) + memoVersion(m,n-1,Memo);
//    Memo[key] = memoVersion(m-1,n,Memo) + memoVersion(m,n-1,Memo);
//    return x;
//
//}
//
//int main () {
//    std::unordered_map<std::string, long long> Memo;
//    std::cin >> inputM >> inputN;
//
//    std::cout << "memo = " << memoVersion(inputM,inputN,Memo) << std::endl;
//    std::cout << "otherVersion = " << otherVersion(inputM,inputN) << std::endl;
//    findPossible(0,0);
//    std::cout << "findPossible = " << count << std::endl;
//
//}
//
//
