// Confirms the build links Eigen, OpenCV and doctest. Says nothing about Atlas itself.

#include <doctest/doctest.h>

#include <Eigen/Dense>
#include <opencv2/core.hpp>

TEST_CASE("Eigen is usable")
{
    const Eigen::Matrix2d identity = Eigen::Matrix2d::Identity();
    CHECK(identity(0, 0) == 1.0);
    CHECK(identity(0, 1) == 0.0);
}

TEST_CASE("OpenCV core is usable")
{
    const cv::Mat mat(2, 3, CV_8UC1, cv::Scalar(7));
    CHECK(mat.rows == 2);
    CHECK(mat.cols == 3);
    CHECK(mat.at<unsigned char>(1, 2) == 7);
}
