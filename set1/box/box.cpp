#include "box.h"
Box::Box():m_length(0),m_breadth(0),m_height(0)
{
    /* Initialization or Assignment??*/
#if 0
    m_length  = 0;
    m_breadth = 0;
    m_height  = 0;
#endif
}
Box::Box(int len,int ht,int bt):m_length(len),m_height(ht),m_breadth(bt)
{
}
Box::Box(int val):m_length(val),m_height(val),m_breadth(val)
{
}
Box::Box(const Box& ref):m_length(ref.m_length),m_height(ref.m_height),m_breadth(ref.m_breadth)
{
}
Box::~Box()
{
}
/*
Function to get the value of length
*/
int Box::length() const
{
    return m_length;
}
int Box::breadth() const
{
    return m_breadth;
}
int Box::height() const
{
    return m_height;
}
int Box::volume() const
{
    return m_height * m_length * m_breadth;
}
void Box::dispay() const
{
    std::cout << "Length : " << m_length
            <<  "Height :"  << m_height
            <<  "Breath: "  << m_breadth;
}

//TODO
#if 0
int main()
{
    Box B1(1,2,3);
    B1.dispay();
    return 0;
}
#endif