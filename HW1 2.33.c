#include <iostream>
using namespace std;

int main()
{
    float dis, gasdis, gasfee, gft;
    int parkfee, passfee, total;
    cout << "輸入一日里程數:\n";
    cin >> dis;;
    cout << "輸入每公升油價:\n";
    cin >> gasfee;
    cout << "輸入每公升行駛距離:\n";
    cin >> gasdis;
    cout << "輸入每日停車費:\n";
    cin >> parkfee;
    cout << "輸入每日過路費:\n";
    cin >> passfee;
    gft = (dis / gasdis) * (float)gasfee;
    total = (int)gft + parkfee + passfee;
    cout << "每日行車總花費:" << total;
}