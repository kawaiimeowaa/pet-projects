#include <gtk/gtk.h>

static void load_css(void) {
    GtkCssProvider *provider = gtk_css_provider_new();

    gtk_css_provider_load_from_path(provider, "style.css");

    gtk_style_context_add_provider_for_display(gdk_display_get_default(), GTK_STYLE_PROVIDER(provider), GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

    g_object_unref(provider);
}

static void activate(GtkApplication *app, gpointer user_data) {

    load_css();

    // new window
    GtkWidget *window = gtk_application_window_new(app);

    // title
    gtk_window_set_title(GTK_WINDOW(window), "Matrix Calculator");

    // screensize
    gtk_window_set_default_size(GTK_WINDOW(window), 1600, 800);
	gtk_window_set_resizable(GTK_WINDOW(window), FALSE);

    // Header bar
    GtkWidget *header = gtk_header_bar_new();

    // show window
    gtk_window_present(GTK_WINDOW(window));
    
    // Main Box
    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
    
    //Workspace Box
    
    GtkWidget *workspace_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    
    // Settings Box
    GtkWidget *settings_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    
    // 
    gtk_box_append(GTK_BOX(main_box), workspace_box);
    gtk_box_append(GTK_BOX(main_box), settings_box);
    gtk_window_set_child(GTK_WINDOW(window), main_box);
    
    gtk_widget_set_hexpand(workspace_box, TRUE);
    gtk_widget_set_size_request(settings_box, 300, -1);
    
    //labels
    GtkWidget *settings_label = gtk_label_new("Settings");
    GtkWidget *matrix_a_label = gtk_label_new("Matrix A Settings");
    GtkWidget *matrix_b_label = gtk_label_new("Matrix B Settings");
    
    // labels in settings_box
    gtk_box_append(GTK_BOX(settings_box), settings_label);
    gtk_box_append(GTK_BOX(settings_box), matrix_a_label);
    gtk_box_append(GTK_BOX(settings_box), matrix_b_label);
    
    // style labels 
    gtk_widget_add_css_class(settings_label, "settings-title");
	gtk_widget_add_css_class(matrix_a_label, "matrix-label");
	gtk_widget_add_css_class(matrix_b_label, "matrix-label");
	
	// matrix a box
	GtkWidget *matrix_a_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
	
	// matrix b box
    GtkWidget *matrix_b_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
}

int main(int argc, char **argv) {
    GtkApplication *app = gtk_application_new("com.github.kawaiimeowaa.MatrixCalculator", G_APPLICATION_DEFAULT_FLAGS);

    // connection activate
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);

    // application launch
    int status = g_application_run(G_APPLICATION(app), argc, argv);

    g_object_unref(app);

    return status;
}