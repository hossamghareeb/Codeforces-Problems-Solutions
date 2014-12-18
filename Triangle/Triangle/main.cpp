//
//  main.cpp
//  Triangle
//
//  Created by Hossam Ghareeb on 4/10/14.
//  Copyright (c) 2014 Hossam Ghareeb. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

#define loop(i,m) for(int i=0; i<(int)(m);i++)
#define loop2(i,n,m) for(int i=n; i<(int)(m);i++)
#define iterat(it,c) for(__typeof(c.begin()) it = c.begin(); it != c.end(); it++)

struct Point{
    int x;
    int y;
};

typedef vector<Point> vp;

bool isInt(double num)
{
    return static_cast<int>(num) == num;
}



int main(int argc, const char * argv[])
{

    int a, b;
    cin >> a >> b;
    
    vp q1;
    vp q2;
    
    for (int i = 1; i <= a; i++) {
        double y = sqrt(a * a - i * i);
        if (isInt(y) && y != 0) {
            q1.push_back({i, (int)y});
        }
    }
    for (int i = 1; i <= b; i++) {
        double y = sqrt(b * b - i * i);
        if (isInt(y)&& y != 0) {
            q2.push_back({-i, (int)y});
        }
    }
    
    bool ok = false;
    iterat(p1, q1)
    {
        iterat(p2, q2)
        {
            float mulSlope = (1.0 * p1->y * p2->y) / (1.0 * p1->x * p2->x);
            if (mulSlope == -1 && (p1->y != p2 ->y)) {
                cout << "YES" << endl;
                cout << "0 0" << endl;
                cout << p1->x << " " << p1->y << endl;
                cout << p2->x << " " << p2->y << endl;
                ok = true;
                break;
            }
        }
        if (ok) {
            break;
        }
    }
    if (!ok) {
        cout << "NO";
    }
    
    
    return 0;
}

