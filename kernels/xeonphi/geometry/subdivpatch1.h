// ======================================================================== //
// Copyright 2009-2014 Intel Corporation                                    //
//                                                                          //
// Licensed under the Apache License, Version 2.0 (the "License");          //
// you may not use this file except in compliance with the License.         //
// You may obtain a copy of the License at                                  //
//                                                                          //
//     http://www.apache.org/licenses/LICENSE-2.0                           //
//                                                                          //
// Unless required by applicable law or agreed to in writing, software      //
// distributed under the License is distributed on an "AS IS" BASIS,        //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. //
// See the License for the specific language governing permissions and      //
// limitations under the License.                                           //
// ======================================================================== //

#pragma once

#include "primitive.h"

namespace embree
{
  struct SubdivPatch1
  {
  public:

    /*! Default constructor. */
    __forceinline SubdivPatch1 () {}
   
    const SubdivMesh * subdiv_mesh;       //!< pointer to subdivision mesh
    unsigned int geomID;                  //!< geometry ID of the subdivision mesh this patch belongs to
    unsigned int primID;                  //!< primitive ID of this subdivision patch
  };
}