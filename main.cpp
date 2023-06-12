#include<iostream>
#include "print.h"
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n;
        cout<<"Enter the number of queen"<<endl;
        cin >> n;
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < n;j++) {
                grid[i][j] = 0;
            }
        }
        bool res = solve(n, 0);
        if(res == false) {
            cout << -1 << endl; //if there is no possible solution
        } else {
            cout << endl;
        }
  return 0;
}
