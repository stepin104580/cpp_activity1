#include "distance.h"
#include<gtest/gtest.h>
namespace{
    TEST(Distance,plusop){
        Distance d1(4,5);
        Distance d2(6,8);
        Distance d3=d1+d2;
        EXPECT_EQ(10, d3.getfeet());
        EXPECT_EQ(13, d3.getinch());
        
    }
    TEST(Distance,minusop){
        Distance d1(8,10);
        Distance d2(6,8);
        Distance d3=d1+d2;
        EXPECT_EQ(2, d3.getfeet());
        EXPECT_EQ(2, d3.getinch());
        
    }
    TEST(Distance,preinc){
        Distance d1(4,5);
        Distance d3=++d1;
        EXPECT_EQ(5, d3.getfeet());
        EXPECT_EQ(6, d3.getinch());
        
    }

    TEST(Distance,postinc){
        Distance d1(4,5);
        Distance d3=d1++;
        EXPECT_EQ(4, d3.getfeet());
        EXPECT_EQ(5, d3.getinch());
        
    }
}