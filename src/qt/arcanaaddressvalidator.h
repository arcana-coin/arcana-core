// Copyright (c) 2011-2014 The Bytcoyn Core Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ARCANA_QT_BITCOINADDRESSVALIDATOR_H
#define ARCANA_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class ArcanaAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ArcanaAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Arcana address widget validator, checks for a valid arcana address.
 */
class BitcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // ARCANA_QT_BITCOINADDRESSVALIDATOR_H
