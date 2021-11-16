#ifndef JETLAG_H
#define JETLAG_H

#include <QMainWindow>
#include <QCompleter>


QT_BEGIN_NAMESPACE
namespace Ui { class JetLag; }
QT_END_NAMESPACE

class JetLag : public QMainWindow
{
    Q_OBJECT

public:
    JetLag(QWidget *parent = nullptr);
    ~JetLag();

private slots:
    void on_cmdGetPlan_clicked();

    void on_JetLag_tabifiedDockWidgetActivated(QDockWidget *dockWidget);



private:
    Ui::JetLag *ui;
};
#endif // JETLAG_H
