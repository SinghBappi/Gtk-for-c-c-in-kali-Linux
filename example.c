#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "GTK3 Test");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}
//gcc `pkg-config --cflags --libs gtk+-3.0` -o gtk_example example.c

// sudo apt update && sudo apt upgrade -y

//pkg-config --modversion gtk+-3.0

//sudo apt install libgtk-3-0-dbg

//sudo apt install glade

//gcc `pkg-config --cflags --libs gtk+-3.0` -o test test.c

//./test


//└─$ gcc example.c -o example $(pkg-config --cflags --libs gtk+-3.0)