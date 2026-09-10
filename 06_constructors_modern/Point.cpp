#include "Point.h"

#include <iostream>
#include <ostream>

Point::Point():Point(0,0, 0.0) {
    // TODO: this constructor should delegate to Point(0.0, 0.0) instead
    // of having a body at all. Rewrite the line above to read:
    //   Point::Point() : Point(0.0, 0.0) {
}

Point::Point(double x, double y):x_(x), y_(y) {
    // TODO: use a member initializer list instead of a body here.
    // Rewrite the line above to read:
    //   Point::Point(double x, double y) : x_(x), y_(y) {
    if (x > 0 && y > 0) {
        std::cout<<"Both x and y are positive"<<std::endl;
    } else {
        std::cout<<"Both x and y are negative"<<std::endl;
    }
}

Point::Point(double xy):Point(xy, xy) {
    // TODO: delegate to the two-argument constructor with both
    // coordinates set to xy. Rewrite the line above to read:
    //   Point::Point(double xy) : Point(xy, xy) {
}
