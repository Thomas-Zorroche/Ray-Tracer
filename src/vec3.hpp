#pragma once

#include <iostream> 

namespace raytracer
{

class Vec3
{
public:
    Vec3(double x = 0.0, double y = 0.0, double z = 0.0) 
        : u {x, y, z} {}

    double x() const { return u[0]; }
    double y() const { return u[1]; }
    double z() const { return u[2]; }

    double r() const { return u[0]; }
    double g() const { return u[1]; }
    double b() const { return u[2]; }

    // Operators with vectors
    Vec3 operator+(const Vec3& v);
    Vec3 operator-(const Vec3& v);
    Vec3& operator+=(const Vec3& v);
    Vec3& operator*=(const Vec3& v);
    
    // Operators with doubles
    Vec3 operator*(double a);
    Vec3& operator*=(double a);

private:
    double u[3];
};

std::ostream& operator<<(std::ostream& os, const Vec3& v);

}; // ns raytracer