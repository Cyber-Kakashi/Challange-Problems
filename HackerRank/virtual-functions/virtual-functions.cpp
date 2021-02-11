#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    virtual void getdata() {}
    virtual void putdata() {}
};

class Professor: public Person {
    int publications, cur_id;
    static int stat_cur_id;
public:
    void getdata() {
        cin >> name;
        cin >> age >> publications;
    }
    void putdata() {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
    Professor() {
        this->cur_id = ++stat_cur_id;
    }
};

class Student: public Person {
    int marks[6], cur_id;
    static int stat_cur_id;
public:
    void getdata() {
        cin >> name;
        cin >> age;
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }
    void putdata() {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
    Student() {
        this->cur_id = ++stat_cur_id;
    }
    
};

int Professor::stat_cur_id = 0;
int Student::stat_cur_id = 0;

int main(){

    int n, val;
    cin>>n;
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            per[i] = new Professor;

        }
        else per[i] = new Student;

        per[i]->getdata();

    }

    for(int i=0;i<n;i++)
        per[i]->putdata();

    return 0;

}
