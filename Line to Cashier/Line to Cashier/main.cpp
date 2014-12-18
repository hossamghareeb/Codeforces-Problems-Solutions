//
//  main.cpp
//  Line to Cashier
//
//  Created by Hossam Ghareeb on 3/30/14.
//  Copyright (c) 2014 Hossam Ghareeb. All rights reserved.
//

#include <cstring>
#include <string.h>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
using namespace std;

#define all(v) v.begin(),v.end()
#define forloop(i,m) for(int i=0;i<(int)(m);i++)
#define forloop2(i,n,m) for(int i=n;i<(int)(m);i++)
#define printCase(i) printf("Case #%d:", i)
#define printEndLine cout << endl

typedef vector<string> vs;
typedef  stringstream ss;
typedef vector<int> vi;



int main(int argc, const char * argv[])
{
    
    int numOfCashiers;
    cin >> numOfCashiers;
    
    string line;
    getline(cin, line);
    getline(cin, line);
    int minSeconds = INT32_MAX;
    
    forloop(c, numOfCashiers)
    {
        
        string items;
        getline(cin, items);
        ss stream(items);
        
        string item;
        int total = 0;
        while (stream >> item) {
            int numOfItems = atoi(item.c_str());
            total += numOfItems * 5 + 15;
        }
        
        if (minSeconds > total) {
            minSeconds = total;
        }
    }
    cout << minSeconds;
    return 0;
}

