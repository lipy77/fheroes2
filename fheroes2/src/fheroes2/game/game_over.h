/***************************************************************************
 *   Copyright (C) 2009 by Andrey Afletdinov                               *
 *   afletdinov@mail.dc.baikal.ru                                          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef H2GAMEOVER_H
#define H2GAMEOVER_H

#include <string>

namespace GameOverConditions
{
    enum wins_t
    {
	WINS_ALL,
	WINS_TOWN,
	WINS_HERO,
	WINS_ARTIFACT,
	WINS_SIDE,
	WINS_GOLD,
    };

    enum loss_t
    {
	LOSS_ALL,
	LOSS_TOWN,
	LOSS_HERO,
	LOSS_TIME,
    };

    const std::string & Wins(wins_t);
    const std::string & Loss(loss_t);
};

#endif