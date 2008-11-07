/*
 * GnomeSword Bible Study Tool
 * settings.h - SHORT DESCRIPTION
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

#ifndef _SETTINGS_H_
#define _SETTINGS_H_

#include <gconf/gconf-client.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _settings SETTINGS;
struct _settings {
	char	
		*gs_version,	 	/* GnomeSword version */
		*MainWindowModule,	/* module to open at program startup  */
		*CommWindowModule,	/* module to open at program startup  */
		*DictWindowModule,	/* module to open at program startup  */
	        *parallel1Module,	/* 5 parallel passage modules  */
	        *parallel2Module,	/*   */
	        *parallel3Module,	/*   */
	        *parallel4Module,	/*   */
	        *parallel5Module,	/*   */
	        *personalcommentsmod,	/* module to open at program startup  */
		sb_search_mod[80], 	/* module for sidebar search */
	        *devotionalmod, 	/* module for devotional */
	        *DefaultDict,		/* module for default dict */
		*lex_greek,		/* module for greek lexicon - strongs or thayers */
		*lex_hebrew,		/* module for hebrew lexicon - strongs or BDB */	        
	        *currentverse,		/* where we are right now */
		comm_key[80],		/*  */
	        *cvparallel,		/* current verse for detached parallel */
		*percomverse,		/* current verse for personal comments */
	        *dictkey,		/* dictionary key to use at program startup - the one we shut down with */
	        *studypadfilename,	/* name of file in studypad when we closed */
		*studypaddir,		/* directory for studypad files */
		groupName[50],		/* shortcut bar group name (viewer, verse list) */
		searchText[256],	/* search string used by sidebar search */
		findText[256],		/* string used by find dialog */
		*spell_language,
		
	/* fonts, font colors and font sizes */
	        *bible_text_color,	/* color for text */
	        *bible_bg_color,	/* color for background */
	        *currentverse_color,	/* color for current verse */
	        *link_color,		/* color for strongs, morph tags */	
		*bible_verse_num_color,	/* verse number color */
		*found_color,		/* color for search word in results display */
		*font_color,		/*  */
		*highlight_fg,		/* special fg color for highlight */
		*highlight_bg,		/* special bg color for highlight */
		*verse_num_font_size_str,
		*base_font_size_str;
		
	int
		verse_num_font_size,
		base_font_size,
      		sidebar_width,
		verselist_toppane_height, //height of the top pane in the search results window
		upperpane_hight,
		biblepane_width,
		biblepane_hight,
		commpane_hight,
		sidebar_notebook_hight,
		gs_width,
		tmp_width,
		gs_hight,	
		searchbargroup,      //-- number of search group in shortcut bar
		searchType,
		whichwindow,      	/* which of the main form html windows is active */
		intCurVerse,    /* detached parallel current verse */
		parallel_page,   /* parallel workbook page number */
		tab_page,   /* studypad workbook page number */
		percomm_page;   /* percomm editor workbook page number */
						
	int   
		usedefault, /* use default settings in gnomesword or those used for last session */
		strongs,	//-- toogle button and check menu state
		strongsint, //-- check menu state parallel mods
		headingsint, //-- check menu state parallel mods	
		crossrefint, //-- check menu state parallel mods	
		lemmasint, //-- check menu state parallel mods		
		morphsint, //-- check menu state parallel mods
		hebrewpointsint, //-- check menu state parallel mods
		cantillationmarksint, //-- check menu state parallel mods
	        footnotesint, //-- check menu state parallel mods
		greekaccentsint, //-- check menu state parallel mods
	        versestyle, /* use verse style if true or paragraph style if not */
	        linkedtabs, /* all tabs are linked together, moving in concert */
	        showversenum, /* display verse numbers in text (default on) */
	        readaloud, /* pass text through (existing) "festival -server" */
	        versehighlight, /* do special fg/bg for current verse */
	        doublespace, /* double-space text (default off) */
	        parallelpage, /* display parallel page */
	        autosavepersonalcomments, /* auto save personal notes */
	        formatpercom, /* use html to format personal notes */
	        showshortcutbar, /* display shortcut bar if true */
	        showsidebar, /* display sidebar bar if true */
		showfavoritesgroup, /* display shortcut bar group if true */
	        showtextgroup, /* display shortcut bar group if true */
	        showcomgroup, /* display shortcut bar group if true */
	        showdictgroup, /* display shortcut bar group if true */
	        showbookgroup, /* display shortcut bar group if true */
	        showbookmarksgroup, /* display shortcut bar group if true */
	        showhistorygroup, /* display shortcut bar group if true */
		showsplash, /* show splash on program start if true */
		showdevotional, /* show devotional on program start if true */
		text_tool, /* show toolbar in text window if true  */
                showtexts, /* show bible texts if true  */
                showpreview, /* show preview pane if true  */
                showcomms, /* show commentaries if true  */
                showdicts, /* show dictionaries/lexicons if true */
		showbookeditor,
		displaySearchResults, /* are we displaying search results in chap display */
		showinmain, /* when verse list item clicked show in main form if true */
		havethayer, /* for greek morph tags */
		havebdb, /* for hebrew morph tags */
//		inViewer, /* display dict/lex in viewer when word or link clicked */
//		inDictpane, /* display dict/lex in Dict/Lex pane when word or link clicked */
		useDefaultDict,
//		strip_words_in_red,
		browsing, /* true for tabbed browsing */
		
		/** if items are docked **/
		docked, /* true when sidebar is docked */
		dockedInt, /* true when parallel page is docked */
		
		/**  find dialogs info  **/
		finddialog, /* if finddialog open (showing) */
		
		/** editors **/
		editnote, /* true when percom html widget is in edit mode */
		editgbs, /* true when gbs html widget is in edit mode */
		modifiedGBS, /* book entry modified */
		modifiedPC, /* personal note modified */
		modifiedSP, /* studypad file modified */
//		use_studypad, /* use studypad */
//		use_studypad_dialog, /* display studypad in a dialog */
		studypad_dialog_exist, /* studypad dialog has been created */
//		use_percomm_dialog, /* display personal comments editor in a dialog */
		percomm_dialog_exist, /* percomm dialog has been created */
		
		/** do we have these modules **/
		havebible, 
		havecomm, 
		havedict, 
		havebook, 
		havepercomm,
		haveprayerlist,
		/* do we need to add item to history */
		addhistoryitem;
	
	
		
	/* gbs */	
	char *book_mod;	/* module to open at program startup  */
	char *book_key;    /*  */
	unsigned long book_offset;
	
	int comm_showing;	/* whether comm or book is visible */
	
	/* store program title */
	char program_title[256];
	
	/* store $home directory */
	char *homedir;

	/* store .gnomesword-2.0 directory */
	char *gSwordDir;

	/* bookmarks directory */
	char *swbmDir;

	/* store dir name for shortcutbar files */
	char *shortcutbarDir;

	/* store filename for configure file - options */
	char *fnconfigure;

	/* module name for current dialog */
	char *module_dialog;

	/* apply changes to what? the text navigation bar */
	int apply_change;
	
	/* load xml bookmarks */
	int load_xml_bookmarks;
	
	/* is Bibletime on the system */
	int have_bibletime;
	
	/* cell height of dictionary treeview */
	int cell_height;
	
	/* window location at close */
	int app_x;
	int app_y;
	
	/* there is no settings.xml file */
	int first_run;
	
	/* widget shadow type */
	int shadow_type;
	
	/* chapter scroll */
	int chapter_scroll;
	
	/* auto image resize in com/book/dict */
	int imageresize;
	
	/* signal id dictionary combo changed */
	long signal_id;
	
	/* mod mgr local or remote  */
	int mod_mgr_source; /* 0 = local, 1 = remote */
	/* mod mgr local sorce  */
	int mod_mgr_local_source_index;
	/* mod mgr remote source  */
	int mod_mgr_remote_source_index;
	/* mod mgr destination  */
	int mod_mgr_destination; /* if = 0 destination is .sword 
								 else sword directory  */
	/* if true use prayerlist */
	int prayerlist;
	
};

extern SETTINGS settings;

int settings_init(int new_configs, int new_bookmarks);
void load_settings_structure(void);
void gconf_setup(void);

#define	GS_GCONF_MAX	6

#ifdef __cplusplus
}
#endif

#endif