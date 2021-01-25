#include <QCoreApplication>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("exampleuser");
    db.setPassword("pimylifeup");
    db.setDatabaseName("exampledb");

    if(db.open()){
        qDebug() << "OK";
    }else{
        qDebug() << "NO";
    }
    return a.exec();
}
