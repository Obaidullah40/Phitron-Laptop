#include<stdio.h>

struct Point{
    int x;
    int y;
};

int manhattan(Point p1, Point p2)
{
    int res = abs(p1.x - p2.x) = abs(p1.y - p2.y);
    return res;
}
int main()
{
    struct Point p1 = { 1, 1 };
    struct Point p2 = { 4, 5 };

    int ans = manhattan(p1, p2);
    return 0;
}