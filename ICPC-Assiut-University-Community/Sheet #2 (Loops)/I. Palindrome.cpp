#include <iostream>
using namespace std;

int main()
{
    string x;
    cin>>x;
    int length=x.length();
    for (int i = 0; i < length/2; i++)
    {
        char temp = x[i];
        x[i] = x[length - i - 1];
        x[length - i - 1] = temp;
    }
    cout<<x<<endl;
    for (int i = 0; i < length; i++)
    {
        if (x[length-1]==0)
        {
            int n = sizeof(x) / sizeof(x[0]);
            n--;
            char palindrome;
            if (n % 2 ==0)
            {
                palindrome = x[i];
                if (x[n - i - 1] == palindrome)
                {
                    cout<<"Yes";
                    break;
                }else{
                    cout<<"No";
                    break;
                }
                
            }else if (n & 2 != 0)
            {
                palindrome = x[i];
                if (x[n - i - 1] == palindrome)
                {
                    cout<<"Yes";
                    break;
                }else{
                    cout<<"No";
                    break;
                }
            }
        }else{
            char palindrome;
            if (length % 2 ==0)
            {
                palindrome = x[i];
                if (x[length - i - 1] == palindrome)
                {
                    cout<<"Yes";
                    break;
                }else{
                    cout<<"No";
                    break;
                }
                
            }else if (length & 2 != 0)
            {
                palindrome = x[i];
                if (x[length - i - 1] == palindrome)
                {
                    cout<<"Yes";
                    break;
                }else{
                    cout<<"No";
                    break;
                }
            }
        
        } 
    }
    return 0;
}