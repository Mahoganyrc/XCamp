////#include <iostream>
////#include <vector>
////#include <algorithm>
////
////int n;
////std::string input;
////bool visited[100001];
////long long counter = 0;
////int w[100001];
////std::vector<int> valid;
////
////int main () {
////    long long total = 0;
////    std::cin >> n >> input;
////
////    int z;
////    for (z = 0; z < n; z++) {
////        if (input[z] == 'O') {
////            break;
////        }
////    }
////
////    for (int i = z; i < n; i++) {
////        if (input[i] == 'W') {
////            w[z]++;
////        }
////    }
////    int lastPos = z;
////    valid.push_back(z);
////    for (int i = z+1; i < n; i++) {
////        if (input[i] == 'O') {
////            w[i] = w[lastPos];
////            valid.push_back(i);
////            for (int j = lastPos; j < i; j++) {
////                if (input[j] == 'W') {
////                    w[i]--;
////                }
////            }
////            lastPos = i;
////        }
////    }
////    for (int i = 0; i < n; i++) {
////        if (input[i] == 'C') {
////            auto start = std::lower_bound(valid.begin(),valid.end(),i+1);
////            if (start != valid.end() && *start >= i) {
////                int index =  std::distance(valid.begin(), start);
////                for (int i = index; i < valid.size(); i++) {}
////                counter+=valid[i];
////            }
////        }
////
////    }
////
////
////    std::cout << counter << std::endl;
////
////}
////
//
//#include <iostream>
//
//int main() {
//    int n;
//    std::cin >> n;
//    std::string input;
//    std::cin >> input;
//
//    long long countC = 0;
//    long long countO = 0;
//    long long countW = 0;
//
//
//    for (char c : input) {
//        if (c == 'C') {
//            countC++;
//            //std::cout << "C: " << countC << std::endl;
//        } else if (c == 'O') {
//            countO = (countO + countC);
//            //std::cout << "O: " << countC << std::endl;
//        } else if (c == 'W') {
//            countW = (countW + countO);
//           // std::cout << "W: " << countC << std::endl;
//        }
//
//    }
//
//    std::cout << countW << std::endl;
//
//    return 0;
//}
