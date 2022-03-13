#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
#include <fstream>
using namespace std;

struct date;
struct student;
struct CLASS;
struct course;
struct perform;
struct scoreboard;
struct semester;
struct year;

struct date{
    int day, month, year;
};

struct student{
    char *id;
    char *name;
    char *Class;
    int gender; // 0 is female, 1 is male
    date dob;
    course *pCourse = nullptr;
    student *pStudentNext = nullptr;
};

struct scoreboard{
    student *stuHead;
    double Midterm, Final, bonus, total;
    scoreboard *pScoreboardNext = nullptr;
};

struct CLASS{
    char *nameClass;
    student *pStudentHead = nullptr;
    CLASS *pClassNext = nullptr;
};

struct Year{
    char *nameYear;
    CLASS *pClassHead = nullptr;
    semester *psemHead = nullptr;
    Year *pYearNext = nullptr;
};

struct semester{
    char *nameSemester;
    date startDate, endDate;
    date regStart, regEnd; // date of registration
    course *pCourseHead = nullptr;
    semester *pSemNext = nullptr;
};

struct perform{
    //day
    char *d1;
    char *d2;
    // shift
    char *s1;
    char *s2;
};

struct course{
    char *IDcourse;
    char *NAMEcourse;
    char *courseSemester;
    int maxStudent;
    int sumCredit;
    perform performDate;
    student *pStuHead = nullptr;
    scoreboard *pScoreHead = nullptr;
    course *pCourseNext = nullptr;
};


#endif

