#include <iostream>

using namespace std;

class Student;

class Teacher {
    public:
        void assignGrades(Student &s);
        void adjustHours(Student &s);
    
    private:
        int noOfStudent;
        Student *pList[100];
};

class Student {
    public:
        friend class Teacher;   //友元类

    private:
        int semesterHours;
        float gps;
};