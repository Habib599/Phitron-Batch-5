#include <bits/stdc++.h>
using namespace std;

class student {
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp( student a,  student b) 
{
    if (a.eng_marks != b.eng_marks)
        return a.eng_marks > b.eng_marks;

    if (a.math_marks != b.math_marks)
        return a.math_marks > b.math_marks;

    return a.id < b.id;
}

int main() 
{
    int n;
    cin >> n;

    student a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++) 
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}
