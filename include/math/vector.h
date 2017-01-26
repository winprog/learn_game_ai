#ifndef __LGAI_MATH_VECTOR_H__
#define __LGAI_MATH_VECTOR_H__

struct Vector2D
{
    double x;
    double y;

    Vector2D() : x(0.0), y(0.0) {}
    Vector2D(double a, double b) : x(a), y(b) {}

    inline void zero();
    inline bool isZero() const;
    inline double length() const;
    inline double lengthSq() const;
    inline void normalize();
    inline double dot(const Vector2D &v2) const;
    inline int sign(const Vector2D &v2) const;
    inline VectorD perp() const;
    inline void truncate(double max);
    inline double distance(const Vector2D &v2) const;
    inline double distanceSq(const Vector2D &v2) const;
    inline Vector2D reverse() const;

    const Vector2D& operator+=(const Vector2D &rhs);
    const Vector2D& operator-=(const Vector2D &rhs);
    const Vector2D& operator*=(const Vector2D &rhs);
    const Vector2D& operator/=(const Vector2D &rhs);
    bool operator==(const Vector2D& rhs);
    bool operator!=(const Vector2D& rhs);
};

#endif // __LGAI_MATH_VECTOR_H__
