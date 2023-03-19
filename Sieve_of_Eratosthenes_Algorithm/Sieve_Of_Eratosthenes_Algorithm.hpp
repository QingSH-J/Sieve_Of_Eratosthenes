//
//  Sieve_Of_Eratosthenes_Algorithm.hpp
//  Sieve_of_Eratosthenes_Algorithm
//
//  Created by 金心羽 on 2023/3/13.
//

#ifndef Sieve_Of_Eratosthenes_Algorithm_hpp
#define Sieve_Of_Eratosthenes_Algorithm_hpp

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

class Prime
{
public:
    bool IsPrime[100000];
public:
    void SetTrue();
    vector<int> PrimeFind(int N);
    int EulerPrimeFind(int N);
};

#endif /* Sieve_Of_Eratosthenes_Algorithm_hpp */
