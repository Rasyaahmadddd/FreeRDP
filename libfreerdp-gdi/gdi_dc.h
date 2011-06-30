/**
 * FreeRDP: A Remote Desktop Protocol Client
 * GDI Device Context Functions
 *
 * Copyright 2010-2011 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __GDI_DC_H
#define __GDI_DC_H

#include "gdi.h"

HGDI_DC gdi_GetDC();
HGDI_DC gdi_CreateCompatibleDC(HGDI_DC hdc);
HGDIOBJECT gdi_SelectObject(HGDI_DC hdc, HGDIOBJECT hgdiobject);
int gdi_DeleteObject(HGDIOBJECT hgdiobject);
int gdi_DeleteDC(HGDI_DC hdc);

#endif /* __GDI_DC_H */
