#ifndef DIFFERENCESWIDGET_H
#define DIFFERENCESWIDGET_H

#include <QScrollArea>
#include <QVector>
#include <QCheckBox>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QLabel>
#include "change.h"

namespace Ui {
class DifferencesWidget;
}

class DifferencesWidget : public QScrollArea
{
    Q_OBJECT

public:
    explicit DifferencesWidget(QWidget *parent = 0);
    QVector<Change*> addDifference(QVector<Change*> changes);
    ~DifferencesWidget();

private:
    Ui::DifferencesWidget *ui;
    QWidget *central;
    QVBoxLayout *diffBox;

};

#endif // DIFFERENCESWIDGET_H
