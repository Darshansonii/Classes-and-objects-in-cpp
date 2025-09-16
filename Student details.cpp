// Darshan Soni
// 24070123034

#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
};

int main(){
    Student S1;
    S1.name="Darshan Soni";
    S1.branch="E&TC";
    S1.subject="C++";
    S1.year="Second";
    S1.result=7.8;

    Student S2;
    S2.name="Ayush yadav";
    S2.branch="E&TC";
    S2.subject="C++";
    S2.year="Second";
    S2.result=7.9;

    Student S3;
    S3.name="Avatar singh";
    S3.branch="E&TC";
    S3.subject="C++";
    S3.year="Second";
    S3.result=7.5;

    cout<<S1.name<<endl;

    return 0;
}

// OUTPUT
// Darshan Soni