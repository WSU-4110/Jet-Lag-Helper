#ifndef JETLAG_H
#define JETLAG_H

#include <QMainWindow>
#include <QCompleter>
#include <QNetworkAccessManager>
#include <QNetworkReply>

QT_BEGIN_NAMESPACE
namespace Ui { class JetLag; }
QT_END_NAMESPACE

class JetLag : public QMainWindow
{
    Q_OBJECT

public:
    JetLag(QWidget *parent = nullptr);
    ~JetLag();
    QNetworkAccessManager *mManager;
public slots:
        void downloadDone(QNetworkReply *reply);
private slots:
    void on_cmdGetPlan_clicked();

    void on_JetLag_tabifiedDockWidgetActivated(QDockWidget *dockWidget);



private:
    Ui::JetLag *ui;
};
#endif // JETLAG_H
