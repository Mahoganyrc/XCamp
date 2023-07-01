//
//#include <iostream>
//#include <sstream>
//#include <string>
//int main()
//{
//
//    int size;
//    int value;
//    int res[100];
//    int value1;
//    int value2;
//
//    std::string currentLine = "";
//
//    std::cin >> size;
//    std::string input[101];
//    int triangle[100][100];
//
//    for (int i = 0; i<=size; i++) {
//
//        std::getline(std::cin,currentLine);
//        if (i==0) continue;
//        input[i-1] = currentLine;
//
//    }
//    for (int i=0;i<size;i++) {
//        std::istringstream is(input[i]);
//        int j=0;
//        while( is >> value ) {
//
//            triangle[i][j++]=value;
//        }
//    }
//
//
//
//    for (int i=0;i<size;i++) {
//        res[i]=triangle[size-1][i];
//    }
//    for (int i=size-2;i>=0;i--) {
//
//        for(int j=0;j<size-1;j++) {
//            value1 = triangle[i][j]+res[j];
//            value2 = triangle[i][j]+res[j+1];
//            res[j] = std::max(value1,value2);
//
//        }
//
//
//    }
//    std::cout << res[0] << std::endl;
//
//    return 0;
//}