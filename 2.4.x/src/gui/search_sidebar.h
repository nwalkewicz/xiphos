/*
 * GnomeSword Bible Study Tool
 * search_sidebar.h - sidebar search gui
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

#ifndef _SEARCH_SIDEBAR_H
#define _SEARCH_SIDEBAR_H

#ifdef __cplusplus
extern "C" {
#endif	
//#include <gnome.h>
	
typedef struct _sidebar_search SIDESEARCH;
struct _sidebar_search {
	GtkWidget *rrbUseBounds;
 	GtkWidget *entrySearch;
 	GtkWidget *entryLower;
 	GtkWidget *entryUpper;
	GtkWidget *rbMultiword;
 	GtkWidget *rbRegExp;
	GtkWidget *rbNoScope;
 	GtkWidget *rbLastSearch;
 	GtkWidget *rbPhraseSearch;
 	GtkWidget *ckbCaseSensitive;
 	GtkWidget *progressbar_search;
 	GtkWidget *frame5;
 	GtkWidget *frame_module;
 	GtkWidget *radiobutton_search_text;
 	GtkWidget *radiobutton_search_comm;
};
extern SIDESEARCH ss;
	
void gui_search_update_sidebar(char percent, void *userData);
void gui_create_search_sidebar(void);

#ifdef __cplusplus
}
#endif

#endif