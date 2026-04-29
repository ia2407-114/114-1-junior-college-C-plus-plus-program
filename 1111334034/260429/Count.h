// Count.h
// Count class definition
#ifndef COUNT_H
#define COUNT_H

class printDate; // forward declaration

// Count class definition
class Count
{
   friend class printDate; // friend class declaration
   friend void setX( Count &, int ); // friend declaration
public:
   // constructor
   Count();

   // output x
   void print() const;
private:
   int x; // data member
}; // end class Count

#endif
