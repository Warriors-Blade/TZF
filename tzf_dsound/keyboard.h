/**
 * This file is part of Tales of Zestiria "Fix".
 *
 * Tales of Zestiria "Fix" is free software : you can redistribute it
 * and/or modify it under the terms of the GNU General Public License
 * as published by The Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * Tales of Zestiria "Fix" is distributed in the hope that it will be
 * useful,
 *
 * But WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Tales of Zestiria "Fix".
 *
 *   If not, see <http://www.gnu.org/licenses/>.
 *
**/

#ifndef __TZF__KEYBOARD_H__
#define __TZF__KEYBOARD_H__

#include <set>
#include <vector>

namespace tzf {
  namespace KeyboardFix {
    void Init     (void);
    void Shutdown (void);

    extern std::set    <uint16_t>                        remapped_scancodes;
    extern std::vector <std::pair <uint16_t, uint16_t> > swapped_keys;
  }
}

#endif /* __TZF__KEYBOARD_H__ */