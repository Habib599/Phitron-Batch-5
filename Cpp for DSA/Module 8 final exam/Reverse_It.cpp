#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string nm;
        int cls;
        char s;
        int id;
};
int main()
{   
    int n;
    cin>>n;
    student a[n];
    for(int i =0;i<n;i++)
    {
        cin >> a[i].nm>> a[i].cls >> a[i].s >> a[i].id;
    }

    for (int i = 0; i < n/ 2; i++) 
    {
        int temp = a[i].s;
        a[i].s = a[n - 1 - i].s;
        a[n - 1 - i].s = temp;
    }

    for (int i = 0; i<n; i++) 
    {
        cout << a[i].nm << " " << a[i].cls << " " 
        << a[i].s<< " " << a[i].id<< endl;
    }
    return 0;
}