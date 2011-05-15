/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -p org.freesmartphone.Device.LED specs/xml/org.freesmartphone.Device.LED.xml
 *
 * qdbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef ORG_FREESMARTPHONE_DEVICE_LED_H_1305375704
#define ORG_FREESMARTPHONE_DEVICE_LED_H_1305375704

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.freesmartphone.Device.LED
 */
class OrgFreesmartphoneDeviceLEDInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.Device.LED"; }

public:
    OrgFreesmartphoneDeviceLEDInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreesmartphoneDeviceLEDInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> BlinkSeconds(int seconds, int on_duration, int off_duration)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(seconds) << qVariantFromValue(on_duration) << qVariantFromValue(off_duration);
        return asyncCallWithArgumentList(QLatin1String("BlinkSeconds"), argumentList);
    }

    inline QDBusPendingReply<> SetBlinking(int on_duration, int off_duration)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(on_duration) << qVariantFromValue(off_duration);
        return asyncCallWithArgumentList(QLatin1String("SetBlinking"), argumentList);
    }

    inline QDBusPendingReply<> SetBrightness(int brightness)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(brightness);
        return asyncCallWithArgumentList(QLatin1String("SetBrightness"), argumentList);
    }

    inline QDBusPendingReply<> SetNetworking(const QString &interface, const QString &mode)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(interface) << qVariantFromValue(mode);
        return asyncCallWithArgumentList(QLatin1String("SetNetworking"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace freesmartphone {
    namespace Device {
      typedef ::OrgFreesmartphoneDeviceLEDInterface LED;
    }
  }
}
#endif
