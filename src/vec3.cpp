#include "vec3.hpp"

namespace raytracer
{

Vec3 Vec3::operator+(const Vec3& v)
{ 
    return Vec3(u[0] + v.u[0], u[1] + v.u[1], u[2] + v.u[2]);
}

Vec3 Vec3::operator-(const Vec3& v)
{ 
    return Vec3(u[0] + v.u[0], u[1] + v.u[1], u[2] + v.u[2]);
}

Vec3& Vec3::operator+=(const Vec3& v)
{ 
    u[0] += v.u[0];
    u[1] += v.u[1];
    u[2] += v.u[2];
    return *this;
}

Vec3& Vec3::operator*=(const Vec3& v)
{ 
    u[0] *= v.u[0];
    u[1] *= v.u[1];
    u[2] *= v.u[2];
    return *this;
}

Vec3 Vec3::operator*(double a)
{
    return (u[0] * a, u[1] * a, u[2] * a);
}

Vec3& Vec3::operator*=(double a)
{
    u[0] *= a;
    u[1] *= a;
    u[2] *= a;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Vec3& v)
{
    os << "(" << v.x() << "," << v.y() << "," << v.z() << ")";
    return os;
}

};

