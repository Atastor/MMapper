/************************************************************************
**
** Authors:   Ulf Hermann <ulfonk_mennhar@gmx.de> (Alve),
**            Marek Krejza <krejza@gmail.com> (Caligor)
**
** This file is part of the MMapper project. 
** Maintained by Nils Schimmelmann <nschimme@gmail.com>
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the GNU General Public License
** as published by the Free Software Foundation; either version 2
** of the License, or (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the:
** Free Software Foundation, Inc.
** 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
**
************************************************************************/

#ifndef MMAPPER2ROOM_H
#define MMAPPER2ROOM_H
//#include "room.h"
//#include "exit.h"
//#include "mapdata.h"

#include <QtGlobal>

class Room;

typedef class QString RoomName;
typedef class QString RoomDescription;
typedef class QString RoomNote;

enum RoomTerrainType    { RTT_UNDEFINED = 0, RTT_INDOORS, RTT_CITY, RTT_FIELD, RTT_FOREST, RTT_HILLS , RTT_MOUNTAINS,
                          RTT_SHALLOW, RTT_WATER, RTT_RAPIDS, RTT_UNDERWATER, RTT_ROAD, RTT_BRUSH,
                          RTT_TUNNEL, RTT_CAVERN, RTT_DEATHTRAP, RTT_RANDOM};

enum RoomPortableType   { RPT_UNDEFINED = 0, RPT_PORTABLE, RPT_NOTPORTABLE };
enum RoomLightType      { RLT_UNDEFINED = 0, RLT_DARK, RLT_LIT };
enum RoomAlignType      { RAT_UNDEFINED = 0, RAT_GOOD, RAT_NEUTRAL, RAT_EVIL };
enum RoomRidableType    { RRT_UNDEFINED = 0, RRT_RIDABLE, RRT_NOTRIDABLE };

#define RMF_RENT            bit1
#define RMF_SHOP            bit2
#define RMF_WEAPONSHOP      bit3
#define RMF_ARMOURSHOP      bit4
#define RMF_FOODSHOP        bit5
#define RMF_PETSHOP         bit6
#define RMF_GUILD           bit7
#define RMF_SCOUTGUILD      bit8
#define RMF_MAGEGUILD       bit9
#define RMF_CLERICGUILD     bit10
#define RMF_WARRIORGUILD    bit11
#define RMF_RANGERGUILD     bit12
#define RMF_SMOB            bit13
#define RMF_QUEST           bit14
#define RMF_ANY             bit15
#define RMF_RESERVED2       bit16
typedef quint16 RoomMobFlags;

#define RLF_TREASURE        bit1
#define RLF_ARMOUR          bit2
#define RLF_WEAPON          bit3
#define RLF_WATER           bit4
#define RLF_FOOD            bit5
#define RLF_HERB            bit6
#define RLF_KEY             bit7
#define RLF_MULE            bit8
#define RLF_HORSE           bit9
#define RLF_PACKHORSE       bit10
#define RLF_TRAINEDHORSE    bit11
#define RLF_ROHIRRIM        bit12
#define RLF_WARG            bit13
#define RLF_BOAT            bit14
#define RLF_ATTENTION 		bit15
#define RLF_TOWER     		bit16
typedef quint16 RoomLoadFlags;

enum RoomField {R_NAME, R_DESC, R_TERRAINTYPE, R_DYNAMICDESC, R_NOTE, R_MOBFLAGS, R_LOADFLAGS, R_PORTABLETYPE, R_LIGHTTYPE, R_ALIGNTYPE, R_RIDABLETYPE, ROOMFIELD_LAST};

RoomName getName(const Room * room);
  
RoomDescription getDescription(const Room * room);
  
RoomDescription getDynamicDescription(const Room * room);
  
RoomNote getNote(const Room * room);

RoomMobFlags getMobFlags(const Room * room);
  
RoomLoadFlags getLoadFlags(const Room * room); 
  
RoomTerrainType getTerrainType(const Room * room); 
  
RoomPortableType getPortableType(const Room * room); 
  
RoomLightType getLightType(const Room * room); 
  
RoomAlignType getAlignType(const Room * room); 

RoomRidableType getRidableType(const Room * room); 

#endif
