// Copyright (c) 2017 The Bytcoyn Core Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ARCANA_RPC_MINING_H
#define ARCANA_RPC_MINING_H

#include <script/script.h>

#include <univalue.h>

/** Generate blocks (mine) */
UniValue generateBlocks(std::shared_ptr<CReserveScript> coinbaseScript, int nGenerate, uint64_t nMaxTries, bool keepScript);

/** Check bounds on a command line confirm target */
unsigned int ParseConfirmTarget(const UniValue& value);

#endif
