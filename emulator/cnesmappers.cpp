//    NESICIDE - an IDE for the 8-bit NES.  
//    Copyright (C) 2009  Christopher S. Pow

//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.

//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.

//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    
#include "cnesmappers.h"
#include "cnesrom.h"
#include "cnesrommapper001.h"
#include "cnesrommapper002.h"
#include "cnesrommapper003.h"
#include "cnesrommapper004.h"
#include "cnesrommapper005.h"
#include "cnesrommapper007.h"
#include "cnesrommapper009.h"
#include "cnesrommapper010.h"
#include "cnesrommapper011.h"
#include "cnesrommapper065.h"
#include "cnesrommapper068.h"

MapperFuncs mapperfunc[] =
{
   /* 000 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 001 */ { CROMMapper001::RESET, CROMMapper001::MAPPER, CROMMapper001::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROMMapper001::LOAD, CROMMapper001::SAVE, true, true },
   /* 002 */ { CROMMapper002::RESET, CROMMapper002::MAPPER, CROMMapper002::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROMMapper002::LOAD, CROMMapper002::SAVE, true, false },
   /* 003 */ { CROMMapper003::RESET, CROMMapper003::MAPPER, CROMMapper003::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROMMapper003::LOAD, CROMMapper003::SAVE, false, true },
   /* 004 */ { CROMMapper004::RESET, CROMMapper004::MAPPER, CROMMapper004::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROMMapper004::SYNCH, CROM::SYNCV, CROM::LATCH, CROMMapper004::LOAD, CROMMapper004::SAVE, true, true },
   /* 005 */ { CROMMapper005::RESET, CROMMapper005::MAPPER, CROM::MAPPER, CROMMapper005::LMAPPER, CROMMapper005::LMAPPER, CROMMapper005::SYNCH, CROM::SYNCV, CROM::LATCH, CROMMapper005::LOAD, CROMMapper005::SAVE, true, true },
   /* 006 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 007 */ { CROMMapper007::RESET, CROMMapper007::MAPPER, CROMMapper007::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROMMapper007::LOAD, CROMMapper007::SAVE, true, false },
   /* 008 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 009 */ { CROMMapper009::RESET, CROMMapper009::MAPPER, CROMMapper009::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROMMapper009::LATCH, CROMMapper009::LOAD, CROMMapper009::SAVE, true, true },
   /* 010 */ { CROMMapper010::RESET, CROMMapper010::MAPPER, CROMMapper010::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROMMapper010::LATCH, CROMMapper010::LOAD, CROMMapper010::SAVE, true, true },
   /* 011 */ { CROMMapper011::RESET, CROMMapper011::MAPPER, CROMMapper011::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROMMapper011::LOAD, CROMMapper011::SAVE, true, true },
   /* 012 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 013 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 014 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 015 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 016 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 017 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 018 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 019 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 020 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 021 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 022 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 023 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 024 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 025 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 026 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 027 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 028 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 029 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 030 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 031 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 032 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 033 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 034 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 035 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 036 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 037 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 038 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 039 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 040 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 041 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 042 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 043 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 044 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 045 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 046 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 047 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 048 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 049 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 050 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 051 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 052 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 053 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 054 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 055 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 056 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 057 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 058 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 059 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 060 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 061 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 062 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 063 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 064 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 065 */ { CROMMapper065::RESET, CROMMapper065::MAPPER, CROMMapper065::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROMMapper065::SYNCH, CROM::SYNCV, CROM::LATCH, CROMMapper065::LOAD, CROMMapper065::SAVE, true, true },
   /* 066 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 067 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 068 */ { CROMMapper068::RESET, CROMMapper068::MAPPER, CROMMapper068::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROMMapper068::LOAD, CROMMapper068::SAVE, true, true },
   /* 069 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 070 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* 071 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false },
   /* */
   /* 255 */ { CROM::RESET, CROM::MAPPER, CROM::MAPPER, CROM::LMAPPER, CROM::LMAPPER, CROM::SYNCH, CROM::SYNCV, CROM::LATCH, CROM::LOAD, CROM::SAVE, false, false }
};

MapperInfo mapper[] =
{
   { "NONE", 0 },
   { "NES-NROM", 0 },
   { "NROM", 0 },
   { "MMC1", 1 },
   { "NES-MMC1", 1 },
   { "NES-S*ROM", 1 },
   { "NES-SAROM", 1 },
   { "NES-SBROM", 1 },
   { "NES-SCROM", 1 },
   { "NES-SEROM", 1 },
   { "NES-SGROM", 1 },
   { "NES-SKROM", 1 },
   { "NES-SL1ROM", 1 },
   { "NES-SLROM", 1 },
   { "NES-SNROM", 1 },
   { "NES-SOROM", 1 },
   { "S*ROM", 1 },
   { "SAROM", 1 },
   { "SBROM", 1 },
   { "SCROM", 1 },
   { "SEROM", 1 },
   { "SGROM", 1 },
   { "SKROM", 1 },
   { "SL1ROM", 1 },
   { "SLROM", 1 },
   { "SNROM", 1 },
   { "SOROM", 1 },
   { "U*ROM", 2 },
   { "UNROM", 2 },
   { "UOROM", 2 },
   { "NES-U*ROM", 2 },
   { "NES-UNROM", 2 },
   { "NES-UOROM", 2 },
   { "CNROM", 3 },
   { "NES-CNROM", 3 },
   { "MMC3", 4 },
   { "MMC6", 4 },
   { "H*ROM", 4 },
   { "HKROM", 4 },
   { "NES-B4", 4 },
   { "NES-H*ROM", 4 },
   { "NES-HKROM", 4 },
   { "NES-MMC3", 4 },
   { "NES-MMC6", 4 },
   { "NES-NES-B4", 4 },
   { "NES-T*ROM", 4 },
   { "NES-TFROM", 4 },
   { "NES-TGROM", 4 },
   { "NES-TKROM", 4 },
   { "NES-TLROM", 4 },
   { "NES-TR1ROM", 4 },
   { "NES-TSROM", 4 },
   { "T*ROM", 4 },
   { "TFROM", 4 },
   { "TGROM", 4 },
   { "TKROM", 4 },
   { "TLROM", 4 },
   { "TR1ROM", 4 },
   { "TSROM", 4 },
   { "MMC5", 5 },
   { "E*ROM", 5 },
   { "EKROM", 5 },
   { "ELROM", 5 },
   { "ETROM", 5 },
   { "EWROM", 5 },
   { "NES-E*ROM", 5 },
   { "NES-EKROM", 5 },
   { "NES-ELROM", 5 },
   { "NES-ETROM", 5 },
   { "NES-EWROM", 5 },
   { "NES-MMC5", 5 },
   { "FFE F4", 6 },
   { "A*ROM", 7 },
   { "AMROM", 7 },
   { "ANROM", 7 },
   { "AOROM", 7 },
   { "NES-A*ROM", 7 },
   { "NES-AMROM", 7 },
   { "NES-ANROM", 7 },
   { "NES-AOROM", 7 },
   { "FFE F3", 8 },
   { "MMC2", 9 },
   { "NES-MMC2", 9 },
   { "NES-P*ROM", 9 },
   { "NES-PEEOROM", 9 },
   { "NES-PNROM", 9 },
   { "P*ROM", 9 },
   { "PEEOROM", 9 },
   { "PNROM", 9 },
   { "MMC4", 10 },
   { "NES-MMC4", 10 },
   { "Color Dreams", 11 },
   { "CPROM", 13 },
   { "100-in-1 Contra Function 16", 15 },
   { "Bandai", 16 },
   { "FFE F8", 17 },
   { "Jaleco SS8806", 18 },
   { "Namcot 106", 19 },
   { "Konami VRC4", 21 },
   { "VRC4", 21 },
   { "Konami VRC2 A", 22 },
   { "Konami VRC2 Type A", 22 },
   { "VRC2 A", 22 },
   { "Konami VRC2 B", 23 },
   { "Konami VRC2 Type B", 23 },
   { "VRC2 B", 23 },
   { "Konami VRC6 A1/A0", 24 },
   { "VRC6 A1/A0", 24 },
   { "Konami VRC4 Y", 25 },
   { "Konami VRC4 Type Y", 25 },
   { "VRC4 Y", 25 },
   { "Irem G-101", 32 },
   { "Taito TC0190", 33 },
   { "TC0190", 33 },
   { "BNROM", 34 },
   { "NES-BNROM", 34 },
   { "Nina-01", 34 },
   { "SMB2j Pirate", 40 },
   { "Caltron 6-in-1", 41 },
   { "Mario Baby", 42 },
   { "SMB2j (LF36)", 43 },
   { "Super HiK 7 in 1 (MMC3)", 44 },
   { "Super 1,000,000 in 1 (MMC3)", 45 },
   { "GameStation/RumbleStation", 46 },
   { "Super Spike & Nintendo World Cup Soccer (MMC3)", 47 },
   { "Super Spike/World Cup", 47 },
   { "1993 Super HiK 4-in-1 (MMC3)", 49 },
   { "SMB2j rev. A", 50 },
   { "11 in 1 Ball Games", 51 },
   { "Mario 7 in 1 (MMC3)", 52 },
   { "SMB3 Pirate", 56 },
   { "Study & Game 32 in 1", 58 },
   { "T3H53", 59 },
   { "20-in-1", 61 },
   { "700-in-1", 62 },
   { "Hello Kitty 255 in 1", 63 },
   { "Tengen RAMBO-1", 64 },
   { "RAMBO-1", 64 },
   { "Irem H-3001", 65 },
   { "GNROM", 66 },
   { "NES-GNROM", 66 },
   { "Sunsoft 3", 67 },
   { "Sunsoft Mapper #3", 67 },
   { "Sunsoft 4", 68 },
   { "Sunsoft Mapper #4", 68 },
   { "Sunsoft FME-07", 69 },
   { "FME-07", 69 },
   { "Camerica (partial)", 71 },
   { "Konami VRC3", 73 },
   { "VRC3", 73 },
   { "Konami VRC1", 75 },
   { "VRC1", 75 },
   { "Irem 74161/32", 78 },
   { "NINA-03", 79 },
   { "NINA-06", 79 },
   { "Cony", 83 },
   { "Konami VRC7", 85 },
   { "VRC7", 85 },
   { "Mapper 90", 90 },
   { "Super Mario World", 90 },
   { "PC-HK-SF3", 91 },
   { "Dragon Buster (MMC3 variant)", 95 },
   { "Dragon Buster", 95 },
   { "Kid Niki (J)", 97 },
   { "Nintendo VS Unisystem", 99 },
   { "VS Unisystem", 99 },
   { "Debugging Mapper", 100 },
   { "Nintendo World Championship", 105 },
   { "HES-Mapper #113", 113 },
   { "TKSROM", 118 },
   { "TLSROM", 118 },
   { "NES-TKSROM", 118 },
   { "NES-TLSROM", 118 },
   { "TQROM", 119 },
   { "NES-TQROM", 119 },
   { "Sachen Mapper 141", 141 },
   { "SMB2j Pirate (KS 202)", 142 },
   { "Sachen Copy Protection", 143 },
   { "AGCI", 144 },
   { "Nintendo VS Unisystem (Extended)", 151 },
   { "Super Donkey Kong", 182 },
   { "72-in-1", 225 },
   { "76-in-1", 226 },
   { "1200-in-1", 227 },
   { "Action 52", 228 },
   { "31-in-1", 229 },
   { "Camerica 9096", 232 },
   { "Maxi 15", 234 },
   { "Golden Game 150-in-1", 235 },
   { "Sachen 74LS374N", 243 },
   { NULL, 256 },
   { "?", 256 } // Unknown index, not parsed typically when going through the list...
};

int mapperIndexFromID ( int id )
{
   int i = 0;

   // Return the name associated with the first
   // match of mapper ID in the list above.
   while ( mapper[i].name )
   {
      if ( mapper[i].id == id )
      {
         break;
      }
      i++;
   }
   if ( !mapper[i].name )
   {
      // Move index to the unknown...
      i++;
   }

   return i;
}

const char* mapperNameFromID ( int id )
{
   int i = 0;

   // Return the name associated with the first
   // match of mapper ID in the list above.
   while ( mapper[i].name )
   {
      if ( mapper[i].id == id )
      {
         break;
      }
      i++;
   }
   if ( !mapper[i].name )
   {
      // Move index to the unknown...
      i++;
   }

   return mapper[i].name;
}
