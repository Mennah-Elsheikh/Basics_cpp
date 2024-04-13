#include <iostream>
using namespace std;
int maxi(int a, int b, int c)
{
    if (a > b)
    {

        if (a > c)
            return a;
        else
            return c;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}
int maxi(int a, int b, int c, int d)
{
    int x = maxi(a, b, c);
    if (x > d)
    {
        return x;
    }
    else
    {
        return d;
    }
}
int maxi(int a, int b, int c, int d, int e)
{
    int y = maxi(a, b, c, d);
    if (y > e)
    {
        return y;
    }
    else
    {
        return e;
    }
}
int maxi(int a, int b, int c, int d, int e, int f)
{
    int z = maxi(a, b, c, d, e);
    if (z > f)
    {
        return z;
    }
    else
    {
        return f;
    }
}
int main()
{
    cout << maxi(1, 2, 3) << endl;
    cout << maxi(1, 2, 3, 4) << endl;
    cout << maxi(1, 2, 3, 4, 5) << endl;
    cout << maxi(1, 2, 3, 4, 5, 6) << endl;
}
// using the max built in function
//  int max(int a, int b, int c) {
//  	return max(a, max(b, c));
//  }

// int max(int a, int b, int c, int d) {
// 	return max(a, max(b, c, d));
// }
// int max(int a, int b, int c, int d, int e) {
// 	return max(a, max(b, c, d, e));
// }
// int max(int a, int b, int c, int d, int e, int f) {
// 	return max(max(a, b, c, d, e), f);
// 	//return max(a, max(b, c, d, e, f));	// or this way
// }

// int main() {
// 	cout<<max(1, 2, 3, 4, 5, 6);

// 	return 0;
// }
