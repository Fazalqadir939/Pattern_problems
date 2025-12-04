// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include "iostream"
using namespace std;
main()
{
    int n = 1;
   // int k =1;
    for (int i = 0;i<5;i++)
    {
        int j =1;
        int k =n;
        for (;j<=n;j++)
        {
                 cout << k%2 <<" ";
            k++;
        }
        n++;
        j++;
        cout << endl;
    }
}
