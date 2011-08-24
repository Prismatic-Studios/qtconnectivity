/****************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt Mobility Components.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qbluetoothtransfermanager.h"
#include "qbluetoothtransferrequest.h"

/*!
    \class QBluetoothTransferManager
    \brief The QBluetoothTransferManager class allows the application to send data objects to other
           devices.  Currently implemented using OPP.

    \ingroup connectivity-bluetooth
    \inmodule QtConnectivity
    \since 5.0

    QBluetoothTransferManager uses OBEX to send get and put commands to remote devices.
*/

/*!
    \enum QBluetoothTransferManager::Operation

    This enum describes the type of operation that a transfer request is for.

    \value GetOperation     The get operation is used to retrieve an object from a remote device. Not implemented.
    \value PutOperation     The put operation is used to send an object to a remote device.
*/

/*!
    \fn QBluetoothTransferReply *QBluetoothTransferManager::put(const QBluetoothTransferRequest &request, QIODevice *data)

    Sends the contents of \a data to the remote device \a request and returns a new
    QBluetoothTransferReply, that can be used to track the request's progress.
*/



/*!
    \fn void QBluetoothTransferManager::finished(QBluetoothTransferReply *reply)

    This signal is emitted when the transfer for \a reply finishes.
*/

/*!
    Constructs a new QBluetoothTransferManager with \a parent.
*/
QBluetoothTransferManager::QBluetoothTransferManager(QObject *parent)
:   QObject(parent)
{
}

/*!
    Destroys the QBluetoothTransferManager.
*/
QBluetoothTransferManager::~QBluetoothTransferManager()
{
}


#include "moc_qbluetoothtransfermanager.cpp"
