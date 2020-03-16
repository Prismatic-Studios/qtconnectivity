/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtNfc module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QNDEFMESSAGE_H
#define QNDEFMESSAGE_H

#include <QtCore/QVector>
#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QMetaType>
#include <QtNfc/qtnfcglobal.h>
#include <QtNfc/QNdefRecord>

QT_BEGIN_NAMESPACE

class Q_NFC_EXPORT QNdefMessage : public QList<QNdefRecord>
{
public:
    inline QNdefMessage() { }
    inline explicit QNdefMessage(const QNdefRecord &record) { append(record); }
    inline QNdefMessage(const QNdefMessage &message) : QList<QNdefRecord>(message) { }
    inline QNdefMessage(const QList<QNdefRecord> &records) : QList<QNdefRecord>(records) { }

    QNdefMessage &operator=(const QNdefMessage &other)
    { QList<QNdefRecord>::operator=(other); return *this; }
    QNdefMessage &operator=(QNdefMessage &&other) noexcept
    { QList<QNdefRecord>::operator=(std::move(other)); return *this; }
    bool operator==(const QNdefMessage &other) const;

    QByteArray toByteArray() const;

    static QNdefMessage fromByteArray(const QByteArray &message);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QNdefMessage)

#endif // QNDEFMESSAGE_H
