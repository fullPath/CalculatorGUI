//: calculator.cpp by Tony Dietrich 29.01.2011
///////////////////////////////////////////////

#include "calculator.h"

Calculator::Calculator(QObject* parent)
:QObject(parent)
,m_result(0)
,m_number(0)
,m_mode(None)
{
}

Calculator::~Calculator()
{
}

void Calculator::setNumber(double x)
{
    m_number = x;
}

void Calculator::add()
{
    calculate();
    m_mode = Add;
}

void Calculator::sub()
{
    calculate();
    m_mode = Sub;
}

void Calculator::div()
{
    calculate();
    m_mode = Div;
}

void Calculator::mult()
{
    calculate();
    m_mode = Mult;
}

void Calculator::calculate()
{
    switch(m_mode)
    {
    case Add:
        m_result += m_number;
        break;
    case Sub:
        m_result -= m_number;
        break;
    case Mult:
        m_result *= m_number;
        break;
    case Div:
        {
            if(!m_number)
            {
                emit divideByZeroException();
                return;
            }
            m_result /= m_number;
            break;
        }
    case None:
        m_result = m_number;
        break;
    }

    m_mode = None;
    emit resultChanged(QString::number(m_result).replace(".",","));
}

void Calculator::reset()
{
    m_result = 0;
    m_number = 0;
    m_mode = None;
    emit resultChanged(QString::number(m_result));
}
