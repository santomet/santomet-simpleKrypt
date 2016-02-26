#ifndef MAINCONSOLE_H
#define MAINCONSOLE_H

#include <QDebug>
#include <QObject>
#include <QCommandLineParser>
#include <QString>
#include <mbedtls/aes.h>
#include <mbedtls/sha512.h>
#include <QFile>
#include <QFileInfo>

class MainConsole : public QObject
{
    Q_OBJECT
public:
    explicit MainConsole(QCommandLineParser *parser, QObject *parent = 0);
    ~MainConsole();



signals:

public slots:

private:
    bool parseOpts();

    QCommandLineParser *mParser;
    bool mEncryptBool, mDecryptBool;
    QString mDest{""};
    QString mSource{""};
    QString mHash{""};
};

#endif // MAINCONSOLE_H
