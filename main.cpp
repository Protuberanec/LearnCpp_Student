#include <QCoreApplication>
#include <QDebug>

#include <QVector>
#include <QList>

#include <QByteArray>
#include <QByteArrayList>

#include <QString>
#include <QStringList>

#include <QtCore/QtAlgorithms>

#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<int> temp_vector = {3,0,1,2,3,3,3,4,5,6,7,8,9,3};

    qDebug() << temp_vector.size();

    qDebug() << "3 is " << std::count(temp_vector.begin(), temp_vector.end(), 3);
    qDebug() << "chet is " << std::count_if(temp_vector.begin(), temp_vector.end(), [](int a1) {return !(a1 % 2);});

    return 0;

    QByteArray temp = "test=test1=test2";
    qDebug() << temp;

    temp.size();
    temp.isEmpty();
    QString str = temp.data();

    QByteArrayList list_temp = temp.split('=');
//    list_temp[0] = QByteArray::number(10, 2);
//    list_temp.at(0) = "fdsf";
    QList<QByteArray> list_temp1 = temp.split('=');

    temp.clear();

    auto iter = list_temp.begin();
    QByteArrayList::iterator iter1 = list_temp.begin();

    for (int i = 0; i < list_temp.size(); i++) {
        temp.prepend(*iter1++);
        qDebug() << *iter++;
    }

    qDebug() << temp;

    return a.exec();
}
