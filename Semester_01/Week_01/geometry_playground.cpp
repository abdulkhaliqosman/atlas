#include <Eigen/Dense>
#include <cmath>
#include <iostream>

#define PI 3.14159265
#define DEG45 PI/4
#define COS45 0.70710678118f

int main()
{
    Eigen::Matrix2f scale {
        {2,0},
        {0,2}
    };
    Eigen::Matrix2f rotate {
        {COS45, -COS45},
        {COS45, COS45}
    };
    Eigen::Vector2f triangle [3] = {{0,0}, {0,1}, {1,1}};
    std::cout << "Hello World!" << std::endl;
    std::cout << scale << std::endl;
    std::cout << rotate << std::endl;
    for (const auto &v : triangle)
    {
        std::cout << v << std::endl;
    }

    std::cout << "After Transformation:" << std::endl;
    auto rs = scale * rotate;
    for (const auto &v : triangle)
    {
        std::cout << rs * v << std::endl;
    }

    std::cout << "Sequential:" << std::endl;
    for (const auto &v : triangle)
    {
        std::cout << scale * rotate * v << std::endl;
    }

    Eigen::Vector2f parallel[2] = {{2, 0}, {3, 0}};
    Eigen::Vector2f perpendicular[2] = {{2, 0}, {0, 2}};
    Eigen::Vector2f opposite[2] = {{2, 0}, {-2, 0}};
    std::cout << "Parallel:" << parallel[0].dot(parallel[1]) << std::endl;
    std::cout << "Perpendicular:" << perpendicular[0].dot(perpendicular[1]) << std::endl;
    std::cout << "Opposite:" << opposite[0].dot(opposite[1]) << std::endl;

    Eigen::Vector3f axes[2] = {{1, 0, 0}, {0, 1, 0}};
    Eigen::Vector3f cross = axes[0].cross(axes[1]);
    std::cout << "Cross:" << cross << std::endl;

    return 0;
}
