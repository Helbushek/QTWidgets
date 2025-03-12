#pragma once

#include <QValidator>

class StrValidator : public QValidator
{
  public:
    StrValidator(QObject *parent) : QValidator(parent){};
    virtual State validate(QString &str, int &pos) const
    {
        return Acceptable;
    }
};
