// Copyright 2018 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// The definitions corresponding to the declarations in this file are
// automatically generated by the build system.  See rules.mk for the
// gory details.

#include <map>
#include <string>

#ifndef ZIRCON_SYSTEM_UTEST_FIDL_COMPILER_EXAMPLES_H
#define ZIRCON_SYSTEM_UTEST_FIDL_COMPILER_EXAMPLES_H

class Examples {
 public:
  // Map from filename to raw source code.
  static std::map<std::string, std::string>& map() { return map_; }

 private:
  static std::map<std::string, std::string> map_;
};

#endif  // ZIRCON_SYSTEM_UTEST_FIDL_COMPILER_EXAMPLES_H