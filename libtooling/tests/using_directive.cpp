/*
 * Copyright (c) 2014-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */
namespace nsa {
  namespace nsb {
    int a;
  }
}
using namespace nsa::nsb;
namespace B = nsa::nsb;
int b = a;
