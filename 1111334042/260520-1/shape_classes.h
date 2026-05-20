#ifndef SHAPE_CLASSES_H
#define SHAPE_CLASSES_H
#include <string>

class shape {
protected:
    std::string name;
    double shape_area;
public:
    shape();
    void area();
};

class rectangle : public shape {
protected:
    double length;
    double width;
public:
    rectangle();
    void data_input();
};

class cube : public rectangle {
private:
    double height;
    double volume;
public:
    cube();
    void data_input();
};

#endif
