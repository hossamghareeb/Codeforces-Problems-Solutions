//
//  main.cpp
//  Garland
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

int getInt(char c)
{
    return c - 'a';
}

int main(int argc, const char * argv[])
{

    string sheets;
    string colors;
    
    getline(cin, sheets);
    getline(cin, colors);
    vi sheetsVec(26);
    vi colorsVec(26);
    
    forloop(i, sheets.size())
    {
        sheetsVec[getInt(sheets[i])]++;
    }
    forloop(i, colors.size())
    {
        colorsVec[getInt(colors[i])]++;
    }
    
    int total = 0;
    forloop(i, 26)
    {
        int sheet = sheetsVec[i];
        int colors = colorsVec[i];
        if (colors > 0 && sheet == 0) {
            total = 0;
            break;
        }
        total += min(sheetsVec[i], colorsVec[i]);
    }
    total = total == 0? -1 : total;
    cout << total;
    
    return 0;
}

