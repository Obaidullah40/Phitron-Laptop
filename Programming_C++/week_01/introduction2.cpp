#include<bits/stdc++.h>
using namespace std;

void print_value(int *y)
{
    *y = 2345;
    cout <<"Inside Function = "<< y << endl;
}

int main()
{
    // int ab;
    // scanf("%d", &ab);

    int a = 10;
    int *b = &a;
    print_value(&a);
    cout << a << endl;
    return 0;
}
