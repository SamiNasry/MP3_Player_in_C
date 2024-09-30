#ifndef GUI_H
#define GUI_H

#include <gtk/gtk.h>

typedef struct {
	GtkWidget *window;
	GtkWidget *playlist;
	GtkWidget *play_button;
	GtkWidget *stop_button;
	GtkWidget *next_button;
	GtkWidget *prev_button;
} MP3PlayerGUI;

// Function to create and initialize the GUI 
MP3PlayerGUI* create_gui(GtkApplication *app);

// Function to update the playlist display
void update_playlist_display(MP3PlayerGUI *gui, char **playlist, int playlist_size);

// Callback functions for button clicks
void on_play_clicked(GtkButton *button, gpointer user_data);
void on_play_clicked(GtkButton *button, gpointer user_data);
void on_next_clicked(GtkButton *button, gpointer user_data);
void on_prev_clicked(GtkButton *button, gpointer user_data);

#endif
