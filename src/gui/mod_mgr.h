/*
 * GnomeSword Bible Study Tool
 * mod_mgr.h
 * 
 * Copyright (C) 2000-2008 GnomeSword Developer Team
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __GUI_MOD_MGR_H__
#define __GUI_MOD_MGR_H__

#ifdef __cplusplus
extern "C" {
#endif
#include "main/mod_mgr.h"

void gui_update_install_status(glong total, glong done, const gchar *message);
void gui_update_install_progressbar(gdouble fraction);
void gui_open_mod_mgr(void);

#ifdef __cplusplus
}
#endif

#endif