/**
 * Copyright (c) 2011-2015 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin-server.
 *
 * libbitcoin-node is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN_SERVER_DEFINE_HPP
#define LIBBITCOIN_SERVER_DEFINE_HPP

#include <bitcoin/bitcoin.hpp>

// We use the generic helper definitions in libbitcoin to define BCX_API 
// and BCX_INTERNAL. BCX_API is used for the public API symbols. It either DLL
// imports or DLL exports (or does nothing for static build) BCX_INTERNAL is 
// used for non-api symbols.

#if defined BCS_STATIC
    #define BCS_API
    #define BCS_INTERNAL
#elif defined BCS_DLL
    #define BCS_API      BC_HELPER_DLL_EXPORT
    #define BCS_INTERNAL BC_HELPER_DLL_LOCAL
#else
    #define BCS_API      BC_HELPER_DLL_IMPORT
    #define BCS_INTERNAL BC_HELPER_DLL_LOCAL
#endif

#endif
