
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
    gtk_window_set_default_size(GTK_WINDOW(window), 1000, 600);


    // Main container
    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);

    // Header bar
    GtkWidget *header = gtk_header_bar_new();

    // Window title
    gtk_header_bar_set_title_widget(GTK_HEADER_BAR(header), gtk_label_new("Matrix Calculator"));

    // Set titlebar
    gtk_window_set_titlebar(GTK_WINDOW(window), header);

    // show window
    gtk_window_present(GTK_WINDOW(window));
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
