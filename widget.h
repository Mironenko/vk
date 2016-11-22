#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>

#include <QJsonObject>
#include <QJsonValue>
#include <QJsonDocument>
#include <QJsonArray>
#include <QStackedLayout>

#include "vkconnect.h"
#include "form.h"
#include "w_login.h"


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:

private:
    int currentIndex;

    Ui::Widget *ui;
    QNetworkAccessManager * manager;
    vkConnect * vk;
    QStackedLayout * l;
    w_login * w_log;
protected:

};

#endif // WIDGET_H
