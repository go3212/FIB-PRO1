#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct point
{
    int i, j;
    int manh_dist;
};

bool compByManhattanDistance (const point &a, const point &b)
{
    if (a.manh_dist == b.manh_dist) 
    {
        if (a.i < b.i) return true;
        else if (a.i == b.i) return a.j < b.j;
        else return false;
    }
    return a.manh_dist < b.manh_dist;
}

int abs_value (const int &x)
{
    if (x < 0) return -1*x;
    return x;
}

void manhattan_distance (const point &p1, point &p2)
{
    p2.manh_dist = abs_value (p2.i - p1.i) + abs_value (p2.j - p1.j);
}

int main ()
{
    point p; 
    p.manh_dist = 0; cin >> p.i >> p.j;

    int n; cin >> n;
    if (n > 0)
    {
        vector<point> points(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> points[i].i >> points[i].j;
            manhattan_distance(p, points[i]);
        }

        sort(points.begin(), points.end(), compByManhattanDistance);

        int distance = points[0].manh_dist;
        cout << "points at distance " << distance << endl;
        for (int i = 0; i < n; ++i)
        {   
            if (distance != points[i].manh_dist) 
            {
                distance = points[i].manh_dist; cout << "points at distance " << distance << endl;
            }
            cout << points[i].i << ' ' << points[i].j << endl;
        }
    }
}