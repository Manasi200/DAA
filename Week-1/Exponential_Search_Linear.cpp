#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int t, n, key;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int c = 0, g = 0, l = 0;
        cin >> n;
        int a[n];
        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        cin >> key;
        if(a[0] == key)
        {
            g = 1;
            c++;
        }
        else
        {
            l = 1;
            c++;
            while(l < n && a[l] <= key)
            {
                l = l * 2;
                c++;
            }
            for(int j = l / 2; j < n; j++)
            {
                c++;
                if(a[j] == key)
                {
                    g = 1;
                    break;
                }
            }
        }
        if(g == 1)
            cout << "Present! " << c << endl;
        else
            cout << "Not Present! " << c << endl;
    }
}
