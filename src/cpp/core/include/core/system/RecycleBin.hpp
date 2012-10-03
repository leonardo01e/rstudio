/*
 * RecycleBin.hpp
 *
 * Copyright (C) 2009-12 by RStudio, Inc.
 *
 * This program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#ifndef CORE_SYSTEM_RECYCLE_BIN_HPP
#define CORE_SYSTEM_RECYCLE_BIN_HPP


namespace core {

class Error;
class FilePath;

namespace system {
namespace recycle_bin {
      
Error sendTo(const FilePath& filePath);

} // namespace recycle_bin
} // namespace system
} // namespace core

#endif // CORE_SYSTEM_RECYCLE_BIN_HPP

