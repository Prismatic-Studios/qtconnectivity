/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -a obex_agent_p.h:obex_agent.cpp org.openobex.agent.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "obex_agent_p.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class AgentAdaptor
 */

AgentAdaptor::AgentAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

AgentAdaptor::~AgentAdaptor()
{
    // destructor
}

void AgentAdaptor::Complete(const QDBusObjectPath &in0)
{
    // handle method call org.openobex.Agent.Complete
    QMetaObject::invokeMethod(parent(), "Complete", Q_ARG(QDBusObjectPath, in0));
}

void AgentAdaptor::Error(const QDBusObjectPath &in0, const QString &in1)
{
    // handle method call org.openobex.Agent.Error
    QMetaObject::invokeMethod(parent(), "Error", Q_ARG(QDBusObjectPath, in0), Q_ARG(QString, in1));
}

void AgentAdaptor::Progress(const QDBusObjectPath &in0, qulonglong in1)
{
    // handle method call org.openobex.Agent.Progress
    QMetaObject::invokeMethod(parent(), "Progress", Q_ARG(QDBusObjectPath, in0), Q_ARG(qulonglong, in1));
}

void AgentAdaptor::Release()
{
    // handle method call org.openobex.Agent.Release
    QMetaObject::invokeMethod(parent(), "Release");
}

QString AgentAdaptor::Request(const QDBusObjectPath &in0)
{
    // handle method call org.openobex.Agent.Request
    QString out0;
    QMetaObject::invokeMethod(parent(), "Request", Q_RETURN_ARG(QString, out0), Q_ARG(QDBusObjectPath, in0));
    return out0;
}

