#include <stdio.h>
#include <iostream>

using namespace std;

void update(int *a, int *b)
{
    *a += *b;
    *b = *a - *b;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    cout << a << b << endl;

    return 0;
}