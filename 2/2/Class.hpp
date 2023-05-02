#pragma once
#include <iostream>
using namespace std;


class Counter{
    int num;
public:
    Counter(int num);
    int get_num();
    void add();
    void minuss();
    // ~Counter();
};
