//#include <iostream>
//#include <cstring>
//
//int w,p,a,b;
//int memoStorage[1000001];
//int memo (int x) {
//    if (x == p) {
//        return 1;
//    }
//    if (x < p) {
//        return 0;
//    }
//    if (memoStorage[x] != -1) {
//        return memoStorage[x];
//    }
//    memoStorage[x] = memo(x-a) + memo(x-b);
//    return memoStorage[x];
//}
//
//int main () {
//    std::cin >> w >> p >> a >> b;
//    memset(memoStorage, -1, sizeof(memoStorage));
//    std::cout << memo(w) << std::endl;
//}
