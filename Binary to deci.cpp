#include<iostream>
using namespace std;
main()
{
   // int n = 10101;
    int length = 0,power=1,power1=1,sum=0;
    for (int i = 1;i<bin;i=i*10)
    {
        length++;
    }
    for (int i = 0;i<length-1;i++)
    {
        power*=10;
    }
    for (int i = 0;i<length-1;i++)
    {
        power1*=2;
    }
    //cout << power;
    int num = to_integer(bin);

    for (int i = 0;i<length;i++)
    {
        int k = num/power;
        num=num%power;
        power= power/10;
        k=k*power1;
        power1=power1/2;
        sum+=k;
    }
    return sum;
    //cout << sum << endl;
}
