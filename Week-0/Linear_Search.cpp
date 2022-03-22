#include <iostream>
using namespace std;


int main()
{
    int t, n, key;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int c = 0, g = 0;
        cin >> n;
        int a[n];
        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        cin >> key;
        for(int j = 0; j < n; j++)
        {
            c++;
            if(a[j] == key)
            {
                g = 1;
                break;
            }
        }
        if(g == 1)
            cout << "Present! " << c << endl;
        else
            cout << "Not Present! " << c << endl;
    }
}
