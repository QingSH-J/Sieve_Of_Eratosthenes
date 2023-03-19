//
//  Sieve_Of_Eratosthenes_Algorithm.cpp
//  Sieve_of_Eratosthenes_Algorithm
//
//  Created by 金心羽 on 2023/3/13.
//

#include "Sieve_Of_Eratosthenes_Algorithm.hpp"



void Prime::SetTrue()
{
    for(int i = 0; i < 100000; i ++)
    {
        IsPrime[i] = true;
    }
    IsPrime[0] = false;
    IsPrime[1] = false;
}

vector<int> Prime::PrimeFind(int N)
{
    vector<int> PrimeList(100000);
    int count = 0;       //calculate the number of Prime
    for(int i = 2; i <= N; i ++)
    {
        if(IsPrime[i])
        {
            PrimeList[count] = i;
            count ++;
            for(int j = i * i; j <= N; j += i)
            {
                IsPrime[j] = false;
            }
        }
    }
    cout << count << endl;
    for(int i = 0; i < count; i ++)
    {
        cout << PrimeList[i] << " ";
    }
    return PrimeList;
}

int Prime::EulerPrimeFind(int N)
{
    int boolprime[100000000] = {0};
    int primelist[100000000] = {0};
    int k = 0;
    scanf("%d", &N);
    for(int i = 2; i <= N; i ++)
    {
        if(boolprime[i] == 0)
        {
            k ++;
            primelist[k] = i;
        }
        for(int j = 1;(j <= k) && (i * primelist[j] <= N); j ++)
        {
            boolprime[i * primelist[j]] = 1;
            if(i % primelist[j] == 0)
            {
                break;
            }
        }
    }
    return k;
}
