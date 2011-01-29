//: calculator.h by Tony Dietrich 29.01.2011
/////////////////////////////////////////////

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>
#include <QString>

class Calculator : public QObject
{ Q_OBJECT
public:
    Calculator(QObject* parent = 0);
    virtual ~Calculator();

public slots:
    void setNumber(double x);

    void add();
    void sub();
    void div();
    void mult();

    void calculate();
    void reset();

signals:
    void resultChanged(QString);
    void divideByZeroException();

private:
    enum Operation { None, Add, Sub, Mult, Div};

private:
    double m_result;
    double m_number;

    Operation m_mode;
};

typedef void (Calculator::*CalulatorFunc)();

#endif // CALCULATOR_H
