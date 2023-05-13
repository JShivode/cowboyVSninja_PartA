#include "doctest.h"
#include <stdexcept>
#include "sources/Team.hpp"
using namespace ariel;
using namespace std;
#include <cmath>
#include <vector>

TEST_CASE("Test Point Conctructor") {
    Point p1 = Point(5.5, 6); //Point(double, double) ctor
    Point p2(4, 0);
    Point p3(6, 7.0);
    CHECK_EQ(p3.getX(), static_cast<double>(6));
    CHECK_EQ(p3.getY(), static_cast<double>(7));
    CHECK_EQ(p1.getX(), 5.5);
    CHECK_EQ(p1.getY(), 6);
    CHECK_EQ(p2.getX(), 4);
    CHECK_EQ(p2.getY(), 0);
    CHECK_EQ(p3.getX(), 6);
    CHECK_EQ(p3.getY(), 7);
    Point p4(2.5, 0);
    Point p5(2.5, 0.0);
    CHECK_EQ(p5.getX(), p4.getX());
    CHECK_EQ(p5.getY(), p4.getY());
    
}

TEST_CASE("Test the distance between two points") {
    Point p1(2, 2);
    Point p2(3, 5);

    //dist between a point and itself = 0
    CHECK_EQ(p1.distance(p1), 0.0);
    CHECK_EQ(p2.distance(p2), 0.0);

    CHECK_EQ(p1.distance(p2), sqrt(10));

}

TEST_CASE("Test class Cowboy functions"){
    Point location(6, 7);
    Cowboy cb1("cowboy1", location); //ctor
    CHECK_EQ(cb1.getName(), "cowboy1");
    //CHECK_EQ(cb1.getLocation(), location);
    //CHECK_EQ(cb1.getNumofBalls(), 6);   
}

TEST_CASE("Test class Ninja functions"){
    Point location(6, 7);
    Ninja n1("Ninja1", location, 10, 0); //ctor
    Ninja n2("Ninja2", location, 15, 0);
    CHECK_EQ(n1.getName(), "Ninja1");
    CHECK_EQ(n1.getHitPoints(), 10); 
    CHECK_EQ(n1.getSpeed(), 0);
    CHECK_EQ(n2.getName(), "Ninja2");
    CHECK_EQ(n2.getHitPoints(), 15); 
    CHECK_EQ(n1.getSpeed(), n2.getSpeed());   
    
}