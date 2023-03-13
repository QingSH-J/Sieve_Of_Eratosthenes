//
//  main.cpp
//  Sieve_of_Eratosthenes_Algorithm
//
//  Created by 金心羽 on 2023/3/13.
//


#include <iostream>
#include "Sieve_Of_Eratosthenes_Algorithm.hpp"
int main(int argc, const char * argv[]) {
    Prime prime;
    prime.SetTrue();
    vector<int> nums = prime.PrimeFind(10);
    return 0;
}
