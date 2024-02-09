/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c RenameJobInterface -p dbusinterface/renamejob_interface renamejob.xml
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef RENAMEJOB_INTERFACE_H
#define RENAMEJOB_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.filemanager.daemon.RenameJob
 */
class RenameJobInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.filemanager.daemon.RenameJob"; }

public:
    RenameJobInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~RenameJobInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Execute()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Execute"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void Done(const QString &in0);
};

namespace com {
  namespace deepin {
    namespace filemanager {
      namespace daemon {
        typedef ::RenameJobInterface RenameJob;
      }
    }
  }
}
#endif
