#ifndef CALCULATORGUI_H
#define CALCULATORGUI_H

#include <QMainWindow>
#include <QString>
#include <QMap>
#include "calculator.h"

namespace Ui {
    class CalculatorGUI;
}

class CalculatorGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculatorGUI(QWidget *parent = 0);
    ~CalculatorGUI();

private:
    void connectBtn();

private slots:
    void operation();

    void addNumber(QString number);

    void divideByZeroException();

private:
    Ui::CalculatorGUI *ui;
    Calculator* m_calc;
    bool m_over_write;

    QMap<QObject*,CalulatorFunc> m_func;
};

#endif // CALCULATORGUI_H
