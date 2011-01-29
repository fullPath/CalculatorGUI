#include <QMessageBox>
#include <QSignalMapper>

#include "calculatorgui.h"
#include "ui_calculatorgui.h"

CalculatorGUI::CalculatorGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorGUI),
    m_calc(new Calculator(this)),
    m_over_write(true)
{
    ui->setupUi(this);

    connectBtn();
}

CalculatorGUI::~CalculatorGUI()
{
    delete ui;
}

void CalculatorGUI::connectBtn()
{
    QSignalMapper* mapper = new QSignalMapper(this);

    connect(ui->btn_add, SIGNAL(clicked()),this,SLOT(operation()));
    connect(ui->btn_sub, SIGNAL(clicked()),this,SLOT(operation()));
    connect(ui->btn_div, SIGNAL(clicked()),this,SLOT(operation()));
    connect(ui->btn_mult, SIGNAL(clicked()),this,SLOT(operation()));
    connect(ui->btn_result, SIGNAL(clicked()),this,SLOT(operation()));
    connect(ui->btn_clear, SIGNAL(clicked()),m_calc,SLOT(reset()));

    m_func[ui->btn_add] = &Calculator::add;
    m_func[ui->btn_sub] = &Calculator::sub;
    m_func[ui->btn_mult] = &Calculator::mult;
    m_func[ui->btn_div] = &Calculator::div;
    m_func[ui->btn_result] = &Calculator::calculate;

    connect(m_calc,SIGNAL(resultChanged(QString)),ui->label, SLOT(setText(QString)));
    connect(m_calc,SIGNAL(divideByZeroException()),this,SLOT(divideByZeroException()));

    connect(ui->btn_0,SIGNAL(clicked()),mapper, SLOT(map()));
    connect(ui->btn_1,SIGNAL(clicked()),mapper, SLOT(map()));
    connect(ui->btn_2,SIGNAL(clicked()),mapper, SLOT(map()));
    connect(ui->btn_3,SIGNAL(clicked()),mapper, SLOT(map()));
    connect(ui->btn_4,SIGNAL(clicked()),mapper, SLOT(map()));
    connect(ui->btn_5,SIGNAL(clicked()),mapper, SLOT(map()));
    connect(ui->btn_6,SIGNAL(clicked()),mapper, SLOT(map()));
    connect(ui->btn_7,SIGNAL(clicked()),mapper, SLOT(map()));
    connect(ui->btn_8,SIGNAL(clicked()),mapper, SLOT(map()));
    connect(ui->btn_9,SIGNAL(clicked()),mapper, SLOT(map()));
    connect(ui->btn_dot,SIGNAL(clicked()),mapper, SLOT(map()));

    mapper->setMapping(ui->btn_0,"0");
    mapper->setMapping(ui->btn_1,"1");
    mapper->setMapping(ui->btn_2,"2");
    mapper->setMapping(ui->btn_3,"3");
    mapper->setMapping(ui->btn_4,"4");
    mapper->setMapping(ui->btn_5,"5");
    mapper->setMapping(ui->btn_6,"6");
    mapper->setMapping(ui->btn_7,"7");
    mapper->setMapping(ui->btn_8,"8");
    mapper->setMapping(ui->btn_9,"9");
    mapper->setMapping(ui->btn_dot,",");

    connect(mapper, SIGNAL(mapped(QString)),this,SLOT(addNumber(QString)));
}

void CalculatorGUI::operation()
{
    if(m_func[sender()])
    {
        m_calc->setNumber(ui->label->text().toDouble());
        m_over_write = true;
        (m_calc->*m_func[sender()])();
    }
}

void CalculatorGUI::addNumber(QString number)
{
    QString current = ui->label->text();
    if(number == "," && current.contains(","))
        return;

    ui->label->setText(m_over_write ? number : current+number);
    m_over_write = false;
}

void CalculatorGUI::divideByZeroException()
{
    QMessageBox::warning(this,"Ein Fehler ist aufgetreten!","Division durch 0 ist undefiniert!");
}
