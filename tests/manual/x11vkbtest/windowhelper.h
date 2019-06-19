/****************************************************************************
**
** Copyright (C) 2019 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Virtual Keyboard module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 or (at your option) any later version
** approved by the KDE Free Qt Foundation. The licenses are as published by
** the Free Software Foundation and appearing in the file LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef WINDOWHELPER_H
#define WINDOWHELPER_H

#include <QObject>

extern "C" {
#include <xdo.h>
}

class WindowHelper : public QObject
{
    Q_OBJECT
public:
    explicit WindowHelper(QObject *parent = nullptr);
    ~WindowHelper();

public:
    Window findWindowByPid(const qint64 appPid) const;
    QPair<quint16, quint16> getWindowDimension(const Window winId) const;

private:
    /** Libxdo context. */
    xdo_t *m_xdo;
};

#endif // WINDOWHELPER_H
