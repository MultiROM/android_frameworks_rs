/*
 * Copyright (C) 2008-2012 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <malloc.h>

#include "RenderScript.h"
#include <rs.h>

using namespace android;
using namespace RSC;

ScriptC::ScriptC(sp<RS> rs,
                 const void *codeTxt, size_t codeLength,
                 const char *cachedName, size_t cachedNameLength,
                 const char *cacheDir, size_t cacheDirLength)
: Script(NULL, rs) {
    mID = rsScriptCCreate(rs->getContext(), cachedName, cachedNameLength,
                          cacheDir, cacheDirLength, (const char *)codeTxt, codeLength);
}

