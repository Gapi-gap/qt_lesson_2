#include <QCoreApplication>

//#include <iostream>
#include <QSslCipher>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//
    //std::cout<<"Hello"<<std::endl;
    QSslCipher test_network;
    QSqlDatabase data_base;
    return QCoreApplication::exec();
}
