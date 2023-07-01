//
//#include <iostream>
//#include <cmath>
//void solve (int n, int source, int dest, int aux);
//
//
//int main() {
//    int input;
//    std::cin >> input;
//    //input = pow(2,input)-1;
//    std::cout << pow(2,input)-1 << std::endl;
//    solve(input,1,3,2);
//    return 0;
//}
//
//void solve (int n, int source, int dest, int aux) {
//    if (n == 1) {
//        std::cout << source << " " << dest << std::endl;
//        return;
//    }
//    solve(n-1,source,aux,dest);
//    std::cout << source << " " << dest << std::endl;
//    solve(n-1,aux,dest,source);
//
//}