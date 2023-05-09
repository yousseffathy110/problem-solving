#include <bits/stdc++.h>
using namespace std;

int main()
{
   int  testCase, counter = 0, distance[4];
   cin >> testCase;
   while (testCase--)
   {
      for (int i = 0; i < 4; i++)
      {
         cin >> distance[i];
      }
      int timur = distance[0];
      for (int j = 1; j < 4; j++)
      {
         if(timur < distance[j])
         {
            counter++;
         }
      }
      cout << counter << endl;
      counter = 0;
   }
   
   return 0;
}