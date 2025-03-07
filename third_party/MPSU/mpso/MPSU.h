// COPYRIGHT 2023
// Author: lx-1234

#pragma once

#include <volePSI/Paxos.h>
#include <vector>
#include "../common/Defines.h"
#include "mqssPMT.h"

namespace mpsu {

// set is 64-bit elements
std::vector<block> MPSUParty(u32 idx, u32 numParties, u32 numElements,
                             std::vector<block> &set, u32 numThreads,
                             bool fakeBase = true, bool fakeTriples = true);

// set is 128-bit elements
u32 MPSUCAParty(u32 idx, u32 numParties, u32 numElements,
                std::vector<block> &set, u32 numThreads,
                bool fakeBase = true, bool fakeTriples = true);

}  // namespace mpsu
