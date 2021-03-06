/**************************************************************************
 * Copyright (c) 2012-2015 Raffaele Pertile <raffarti@zoho.com>
 * This file is part of touchegg-gce.
 *
 * touchegg-gce is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * touchegg-gce is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with touchegg-gce.  If not, see <http://www.gnu.org/licenses/>.
**************************************************************************/

#ifndef SENDKEYS_H
#define SENDKEYS_H

#include <QFrame>
#include "ui_sendkeys.h"

namespace Ui {
class SendKeys;
}

class SendKeys : public QFrame
{
    Q_OBJECT
    
public:
    explicit SendKeys(QWidget *parent = 0);
    ~SendKeys();

    void setKeys(QString keys);

    QString getKeys();
    
private slots:
    void on_keyBox_textChanged(const QString &arg1);

    void on_keyBox_textEdited(const QString &arg1);

    void on_keyBox_keyCatched(const QString &text);

    void on_pushButton_clicked();

private:
    Ui::SendKeys *ui;

    QCheckBox *superBox;
    QCheckBox *ctrlBox;
    QCheckBox *altBox;
    QCheckBox *altGrBox;
    QCheckBox *shiftBox;
    QLineEdit *keyBox;
};

#endif // SENDKEYS_H
