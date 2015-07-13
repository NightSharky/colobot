/*
 * This file is part of the Colobot: Gold Edition source code
 * Copyright (C) 2001-2014, Daniel Roux, EPSITEC SA & TerranovaTeam
 * http://epsiteс.ch; http://colobot.info; http://github.com/colobot
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://gnu.org/licenses
 */

// motionlevelcontroller.h

#pragma once


#include "object/motion/motion.h"

class CMotionLevelController : public CMotion
{
public:
    CMotionLevelController(COldObject* object);
    ~CMotionLevelController();

    void        DeleteObject(bool bAll=false);
    void        Create(Math::Vector pos, float angle, ObjectType type, float power, Gfx::COldModelManager* modelManager);
};
