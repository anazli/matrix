#define CATCH_CONFIG_MAIN
#include<cmath>
#include "../catch.hpp"
#include "../matrix.h"


TEST_CASE("Matrix is created as expected.", "[Matrix]")
{
    Matrix<int> m;
    REQUIRE(m.rows() == 0);
    REQUIRE(m.cols() == 0);

    Matrix<int> m1(4,5);
    REQUIRE(m1.rows() == 4);
    REQUIRE(m1.cols() == 5);

    Matrix<int> m2(1,1);
    REQUIRE(m2(0,0) == 0);
    Matrix<int> m3(1,1,1);
    REQUIRE(m3(0,0) == 1);

}

TEST_CASE("Unary operator (-) works.", "[Matrix]")
{
    Matrix<int> m(2,3,1);
    Matrix<int> m1 = -m;
    for(size_t i = 0 ; i < m1.rows() ; ++i)
    {
        for(size_t j = 0 ; j < m1.cols() ; ++j)
        {
            REQUIRE(m1(i,j) == -1);
        }
    }
}

TEST_CASE("Transpose method works.", "[Matrix]")
{
    Matrix<int> m(2,3);
    m(0,0)=0;m(0,1)=1;m(0,2)=2;
    m(1,0)=3;m(1,1)=4;m(1,2)=5;
    Matrix<int> mt = m.trans();
    REQUIRE(m.rows() == mt.cols());
    REQUIRE(m.cols() == mt.rows());
    for(size_t i = 0 ; i < m.rows() ; ++i)
    {
        for(size_t j = 0 ; j < m.cols() ; ++j)
        {
            REQUIRE(m(i,j) == mt(j,i));
        }
    }

    Matrix<int> m1(1,1,3);
    Matrix<int> m2 = m1.trans();
    REQUIRE(m1.rows() == m2.cols());
    REQUIRE(m1.cols() == m2.rows());
    REQUIRE(m1(0,0) == m2(0,0));


}

TEST_CASE("Sub-matrix method works.", "[Matrix]")

    Matrix<int> m(4,5);
    Matrix<int> sm = m.sub_matrix()
}

/*TEST_CASE("Matrix multiplication.", "[Matrix]")
{
    Matrix<int> m1(4,5);
    Matrix<int> m2(5,6);
    Matrix<int> m3 = multiply(m1, m2);
    REQUIRE(m3.rows() == m1.rows());
    REQUIRE(m3.cols() == m2.cols());
    REQUIRE_THROWS_WITH(multiply(m2, m1), "Multiplication error!");
}*/

