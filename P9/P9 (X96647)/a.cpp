#include <iostream>
#include <vector>

using namespace std;

struct Point
{
    double x, y;
};

bool barycenter (const vector<Point>& v, Point& b)
{
    int n = v.size();

    int i = 0; 
    while (i < n)
    {
        if (v[i].x == b.x and v[i].y == b.y) return true;
        ++i;
    }
    return false;
}

bool first_condition (const vector<Point> &v)
{
    int n = v.size();
    bool found = false;
    for (int i = 0; i < n and !found; ++i)
    {
        for (int j = i + 1; j < n and !found; ++j)
        {
            if (v[i].x != v[j].x or v[i].y != v[j].y) found = true;
        }
    }
    return found;
}

int main ()
{
    cout.setf(ios::fixed);
    cout.precision(2);

    int n; 
    while (cin >> n)
    {
        vector<Point> plane(n);
        Point bar; bar.x = 0; bar.y = 0;
        for (int i = 0; i < n; ++i) 
        {
            cin >> plane[i].x;
            cin >> plane[i].y;
            bar.x += plane[i].x;
            bar.y += plane[i].y;
        }
        int sumx = bar.x, sumy = bar.y;
        bar.x /= n; 
        bar.y /= n;

        cout << "barycenter: (" << bar.x << ',' << bar.y << ')' << endl;

        if (first_condition(plane))
        {   
            if (sumx == sumy)
            {
                if (!barycenter(plane, bar))
                {
                    cout << "normalized vector" << endl;
                } else cout << "property 3 does not hold" << endl;
            } else cout << "property 2 does not hold" << endl;
        } else cout << "property 1 does not hold" << endl;

        
    }
}