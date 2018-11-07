/******************************************************************************
 * Copyright © 2014-2018 The SuperNET Developers.                             *
 *                                                                            *
 * See the AUTHORS, DEVELOPER-AGREEMENT and LICENSE files at                  *
 * the top-level directory of this distribution for the individual copyright  *
 * holder information and the developer policies on copyright and licensing.  *
 *                                                                            *
 * Unless otherwise agreed in a custom licensing agreement, no part of the    *
 * SuperNET software, including this file may be copied, modified, propagated *
 * or distributed except according to the terms contained in the LICENSE file *
 *                                                                            *
 * Removal or modification of this copyright notice is prohibited.            *
 *                                                                            *
 ******************************************************************************/


#ifndef CC_DICE_H
#define CC_DICE_H

#include "CCinclude.h"

#define EVAL_DICE 0xe6

bool DiceValidate(struct CCcontract_info *cp,Eval* eval,const CTransaction &tx);

std::string DiceBet(uint64_t txfee,char *planstr,uint256 fundingtxid,int64_t bet,int32_t odds,std::string &error);
std::string DiceBetFinish(uint8_t funcid,uint256 &entropyused,int32_t *resultp,uint64_t txfee,char *planstr,uint256 fundingtxid,uint256 bettxid,int32_t winlosetimeout);
double DiceStatus(uint64_t txfee,char *planstr,uint256 fundingtxid,uint256 bettxid,std::string &error);
std::string DiceCreateFunding(uint64_t txfee,char *planstr,int64_t funds,int64_t minbet,int64_t maxbet,int64_t maxodds,int64_t timeoutblocks);
std::string DiceAddfunding(uint64_t txfee,char *planstr,uint256 fundingtxid,int64_t amount);
UniValue DiceInfo(uint256 diceid);
UniValue DiceList();

#endif
