//#include <iostream>
//#include <cmath>
//#include <bits/stdc++.h>
//void Bullseye ();
//void projectileMotion();
//
//int main () {
//    int input;
//    std::cout << "Enter the number corresponding to the calculator you want to use\n";
//    std::cout << "1: Bullseye\n2: ProjectileMotion" << std::endl;
//    std::cin >> input;
//    switch (input) {
//        case 1:
//            Bullseye();
//            break;
//        case 2:
//            projectileMotion();
//            break;
//        default:
//            //nada
//            break;
//    }
//}
//
//void Bullseye () {
//        double Vxi;
//        double x;
//        double y;
//
//        std::cout << "Please input vxi: (\"-69\") if not given" << std::endl;
//        std::cin >> Vxi;
//        std::cout << "Please input x: (\"-69\") if not given" << std::endl;
//        std::cin >> x;
//        std::cout << "Please input y: (\"-69\") if not given" << std::endl;
//        std::cin >> y;
//
//        if (Vxi == -69) {
//            x/=y;
//            x*=x;
//            x*=9.8;
//            x/=2;
//            std::cout << x << std::endl;
//        }else if (x == -69) {
//            y*=2;
//            y/=9.8;
//            y = sqrt(y);
//            Vxi *= y;
//            std::cout << Vxi << std::endl;
//        }else if (y == -69) {
//            x/=Vxi;
//            x*=x;
//            x*=9.8;
//            x/=2;
//            std::cout << x << std::endl;
//        }
//
//}
//void projectileMotion() {
//    double theta;
//    double vi;
//    double height;
//    double t;
//    double vxi;
//    double vyi;
//    const double PI = 3.14159265;
//
//    std::cout << "Input theta\n";
//    std::cin >> theta;
//    std::cout << "Input initial velocity\n";
//    std::cin >> vi;
//    std::cout << "Input starting height\n";
//    std::cin >> height;
//    std::cout << std::endl;
//
//    theta *= PI / 180;
//    vxi = vi * cos(theta);
//    vyi = vi * sin(theta);
//    double NegativeBOver2A = (vi * sin(theta)) / 9.8;
//    if (height == 0) {
//        t = vyi / 4.9;
//    } else {
//        t = std::max(((-vyi) + sqrt(((-vyi) * (-vyi)) - ((4) * (-4.9) * (height)))) / -9.8,
//                     ((-vyi) - sqrt(((-vyi) * (-vyi)) - ((4) * (-4.9) * (height)))) / -9.8);
//    }
//
//    std::cout << "time = " << t << std::endl;
//    std::cout << "Range of graph = " << vi * cos(theta) * t << std::endl;
//    std::cout << "Max height of graph = " << -4.9 * (NegativeBOver2A * NegativeBOver2A) + (NegativeBOver2A * vyi) + (height) << std::endl;
//    std::cout << "Equation of graph = -4.9t^2 + " << vyi << "t + " << height << std::endl;
//    std::cout << "Final VXI = " << vxi << std::endl;
//    std::cout << "Final VYI = " << (vyi+(-9.8*t)) << std::endl;
//    std::cout << "Final VI = " << sqrt((vxi*vxi)+((vyi+(-9.8*t))*(vyi+(-9.8*t)))) << std::endl;
//    std::cout << "VI Direction = " << atan(((vyi+(-9.8*t)))/vxi)*180/PI << std::endl;
//}