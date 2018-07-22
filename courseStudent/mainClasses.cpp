#include<iostream>
using namespace std;

//main.h

class Student
{

    int studentId;
    int StudentGrades[10];
public:

    void setStudentId(int idIn);
    void setGrade(int index, int gradeIn);
    void printGrade();
    int* getGrades();
    int getGrade(int index);
    int getMin();
    int getMax();
    float getAvg();
};



void Student::setStudentId(int idIn)
{
    studentId = idIn;
}

void Student::setGrade(int index, int gradeIn)
{
    StudentGrades[index] = gradeIn;
}

int * Student::getGrades()
{
    return StudentGrades;
}

int Student::getGrade(int index)
{
    return StudentGrades[index];
}


void Student::printGrade()
{
    cout << studentId << "\t";
    for(int i = 0; i < 10; i++)
    {
        cout<< StudentGrades[i] << " ";
    }
    cout<< "\n";
}

int Student::getMax()
{
    int max = 0;
    for(int i = 0; i < 10; i++)
    {
        if(StudentGrades[i] > max) max = StudentGrades[i];
    }
    return max;
}

int Student::getMin()
{
    int min = 100;
    for(int i = 0; i < 10; i++)
    {
        if(StudentGrades[i] < min) min = StudentGrades[i];
    }
    return min;
}

float Student::getAvg()
{
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        sum += StudentGrades[i];
    }
    return sum/10.0;
}

//********************
class CourseEnrollment
{
    public:

    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];
    void addStudents(Student* studentsIn);
    int* getAllGrade();
    int* sortAllGrade();
    int getMinGrade();
    int getMaxGrade();
    float getAvgGrade();
};

void CourseEnrollment::addStudents(Student* studentsIn)
{
    for(int i = 0; i < 6; i++)
        students[i] = studentsIn[i];
}

int* CourseEnrollment::getAllGrade()
{
    int counter = 0;
    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 10; j++)
        {
            grades[counter] = students[i].getGrade(j);
            counter++;
        }
    return grades;
}

int* CourseEnrollment::sortAllGrade()
{
    for(int i = 0; i < 60; i++)
        for(int j = 1; j < 60-i; j++)
        {
            if(grades[j] > grades[j+1])
            {
                int temp = 0;
                temp = grades[j+1];
                grades[j+1] = grades[j];
                grades[j] = temp;
            }
        }
    return grades;
}

int CourseEnrollment::getMinGrade()
{
    return grades[0];
}

int CourseEnrollment::getMaxGrade()
{
    return grades[59];
}

float CourseEnrollment::getAvgGrade()
{
    int sum = 0;
    for(int i = 0; i < 60; i++)
        sum += grades[i];
    return sum/60.0;
}




