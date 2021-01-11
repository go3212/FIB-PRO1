#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

struct point
{
    double x, y;
};

double points_distance (point p1, point p2)
{
    double distance = sqrt(pow((p1.x - p2.x),2)+pow((p1.y - p2.y),2));
    if (distance < 0) return (-1*distance);
    return distance;
}

void retrieve_coordinates (point& cord)
{
    cin >> cord.x >> cord.y;
}

int main ()
{
    cout.precision(4);
    cout.setf(ios::fixed);

    string route;
    while (cin >> route)
    {
        point origin;
        retrieve_coordinates (origin);
        point p1 = origin;
        point p2;

        double distance = 0;
        do
        {   
            retrieve_coordinates (p2);
            distance += points_distance (p1, p2);
            p1 = p2;
        } while ((p2.x != origin.x) || (p2.y != origin.y));

        cout << "Route " << route << ": " << distance << endl;
    }



}