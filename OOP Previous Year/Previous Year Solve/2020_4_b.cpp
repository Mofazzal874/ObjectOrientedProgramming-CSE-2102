#include <bits/stdc++.h>
using namespace std;

int main()
{

    int data[] = {10, 340, 200, 0, 50, 60};

    float sum = 0;

    for (int i = 0 ; i <= sizeof(data) / sizeof(int); i++)

    {
        try
        {
            if (data[i] == 0) throw runtime_error("Funck");
            sum += 1 / data[i];
            
        }
        catch (exception &e)
         {
            cout << e.what() << endl;
        }
        

    }
    
    cout << sum << endl;
}