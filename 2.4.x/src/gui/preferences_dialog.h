/*
 * GnomeSword Bible Study Tool
 * preferences_dialog.h - get user preferences
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

#ifndef __PREFERENCES_DIALOG_H_
#define __PREFERENCES_DIALOG_H_

#ifdef __cplusplus
extern "C" {
#endif

void on_checkbutton1_toggled(GtkToggleButton * togglebutton, gpointer user_data);
void on_checkbutton2_toggled(GtkToggleButton * togglebutton, gpointer user_data);
void on_checkbutton3_toggled(GtkToggleButton * togglebutton, gpointer user_data);
void on_checkbutton4_toggled(GtkToggleButton * togglebutton, gpointer user_data);
void on_checkbutton5_toggled(GtkToggleButton * togglebutton, gpointer user_data);
void on_checkbutton6_toggled(GtkToggleButton * togglebutton, gpointer user_data);
void on_checkbutton7_toggled(GtkToggleButton * togglebutton, gpointer user_data);
void on_checkbutton8_toggled(GtkToggleButton * togglebutton, gpointer user_data);
void on_checkbutton9_toggled(GtkToggleButton * togglebutton, gpointer user_data);
	
void on_folder_changed(GtkFileChooser  *filechooser, gpointer user_data);
	
void on_combobox1_changed(GtkComboBox * combobox, gpointer user_data);
void on_combobox2_changed(GtkComboBox * combobox, gpointer user_data);
void on_combobox4_changed(GtkComboBox * combobox, gpointer user_data);
void on_combobox5_changed(GtkComboBox * combobox, gpointer user_data);
void on_combobox6_changed(GtkComboBox * combobox, gpointer user_data);
void on_combobox7_changed(GtkComboBox * combobox, gpointer user_data);
void on_combobox8_changed(GtkComboBox * combobox, gpointer user_data);
void on_combobox9_changed(GtkComboBox * combobox, gpointer user_data);
void on_combobox10_changed(GtkComboBox * combobox, gpointer user_data);
void on_combobox11_changed(GtkComboBox * combobox, gpointer user_data);
void on_combobox12_changed(GtkComboBox * combobox, gpointer user_data);
void on_combobox13_changed(GtkComboBox * combobox, gpointer user_data);
void on_combobox14_changed(GtkComboBox * combobox, gpointer user_data);
void on_combobox15_changed(GtkComboBox * combobox, gpointer user_data);

void on_colorbutton1_color_set(GtkColorButton *colorbutton, gpointer user_data);
void on_colorbutton2_color_set(GtkColorButton * colorbutton, gpointer user_data);
void on_colorbutton3_color_set(GtkColorButton * colorbutton, gpointer user_data);
void on_colorbutton4_color_set(GtkColorButton * colorbutton, gpointer user_data);
void on_colorbutton5_color_set(GtkColorButton * colorbutton, gpointer user_data);

void on_dialog_prefs_response(GtkDialog * dialog, gint response_id, gpointer user_data);


void gui_setup_preferences_dialog(void);

#ifdef __cplusplus
}
#endif

#endif