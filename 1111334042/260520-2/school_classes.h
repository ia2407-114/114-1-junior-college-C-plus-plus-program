#ifndef SCHOOL_CLASSES_H
#define SCHOOL_CLASSES_H
#include <string>

class student {
protected:
    int id;
    std::string name;
public:
    student();
};

class teacher {
protected:
    int id;
    std::string name;
    std::string course_id;
    std::string course_name;
    int course_credit;
public:
    teacher();
    void data_input();
};

class classroom : public teacher, public student {
public:
    void show();
};

#endif
