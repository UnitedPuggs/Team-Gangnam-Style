#include "header.h"
#include "frontpage.h"
#include "sql_database.h"

//AddValues - adds the values to the database. It is used by the readFromFile function
//void addValues(QString Name, QString Address, QString Address2, QString WebSite, QString Intrest, QString Key){
//    QSqlQuery qry;
//    qry.prepare("INSERT INTO customertable ("
//                "Name,"
//                "Address,"
//                "Address2,"
//                "Website,"
//                "Intrest,"
//                "Key)"
//                "VALUES (?,?,?,?,?,?);");
//    qry.addBindValue(Name);
//    qry.addBindValue(Address);
//    qry.addBindValue(Address2);
//    qry.addBindValue(WebSite);
//    qry.addBindValue(Intrest);
//    qry.addBindValue(Key);

//    if(!qry.exec()){
//        qDebug() << "ERROR";
//    }
//    //HGI

//}
//readFromFile reads the customer lists and add them onto the database
//void readFromFile(){

//    QFile file("C:\\Users\\Andy\\GitProject1\\CS1C-Project-1\\Customers.txt");      //Change the file folder to yours
//    if(!file.open(QIODevice::ReadOnly)) {
//        QMessageBox::information(0, "error", file.errorString());
//    }

//    QTextStream in(&file);
//    while(!in.atEnd()) {
//        QString name = in.readLine();
//        QString address = in.readLine();
//        QString address2 = in.readLine();
//        QString website = in.readLine();
//        QString intrest = in.readLine();
//        QString key = in.readLine();
//        QString empty = in.readLine();

//        addValues(name,address,address2,website,intrest,key);       //Uses the addValues function to insert into the database
//    }

//    file.close();
//}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    sql_database db;
    FrontPage w;

    db.sql_createDatabase();
    db.readFile();

    w.show();
    return a.exec();
}