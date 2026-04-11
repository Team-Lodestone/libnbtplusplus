/** @file builder.h
 *
 * @author DexrnZacAttack
 * @date 4/11/26
 * 
 * @device zPc-i2
 *
 * @license libnbt++ - A library for the Minecraft Named Binary Tag format.
 * Copyright (C) 2013, 2015  ljfa-ag
 *
 * This file is part of libnbt++.
 *
 * libnbt++ is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libnbt++ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libnbt++.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef BUILDER_H_INCLUDED
#define BUILDER_H_INCLUDED
#include "libnbt++/tag.h"

namespace nbt::builder {
    template <nbt::TagLike TagType>
    class tag_builder {
    public:
        TagType build() {
            return std::move(m_tag);
        }
    protected:
        TagType m_tag;
    };
}

#endif