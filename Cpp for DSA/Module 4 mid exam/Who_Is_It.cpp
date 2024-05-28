#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    char name[101];
    char section;
    int mark;

    Student(int _id, char _name[], char _section, int _totalMarks) 
    {
        id = _id;
        strcpy(name, _name);
        section = _section;
        mark = _totalMarks;
    }
};

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        Student* students[3];

        for (int i = 0; i < 3; ++i) 
        {
            int id, marks;
            char name[101], section;
            cin >> id >> name >> section >> marks;
            students[i] = new Student(id, name, section, marks);
        }

        Student* highest = students[0];

        for (int i = 1; i < 3; ++i) 
        {
            if (students[i]->mark > highest->mark || 
                (students[i]->mark == highest->mark && students[i]->id < highest->id)) 
                {
                    delete highest;
                    highest = students[i];
                }
                else delete students[i]; 
        }

        cout << highest->id << " " << highest->name << " " << highest->section << " " << highest->mark << endl;

        delete highest;
    }

    return 0;
}
