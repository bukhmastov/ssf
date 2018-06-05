#ifndef SCREENTASK5_H
#define SCREENTASK5_H

#include <QFrame>
#include "util/core.h"
#include "util/screencontroller.h"

namespace Ui {
    class ScreenTask5;
}

class ScreenTask5 : public ScreenController {
    Q_OBJECT

public:
    explicit ScreenTask5(QWidget *parent = 0);
    ~ScreenTask5();
    ScreenController* init(int, bool);
    bool validate(Core*, QString*);

protected:
    void init();

private:
    Ui::ScreenTask5 *ui;
    int n;
    QString v;
    QString h1;
    QString h2;
    QString h3;
    QString mSeq;
};

#endif // SCREENTASK5_H
