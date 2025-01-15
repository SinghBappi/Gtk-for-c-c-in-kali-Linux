#include <gtk/gtk.h>
//Yeh line GTK+ library ko include karti hai jo graphical applications banane ke liye zaroori hai.
//Iske bina aap GTK functions ka use nahi kar paoge.

int main(int argc, char *argv[]){ //Har C program ka execution yahan se start hota hai.
//argc aur argv command-line arguments handle karte hain, jo GTK ke gtk_init() function ke liye pass hote hain.{
    gtk_init(&argc, &argv);//Yeh GTK library ko initialize karta hai.
//Iske bina aapka GTK application kaam nahi karega.

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);//Ek nayi window create karta hai.
//GTK_WINDOW_TOPLEVEL ka matlab hai yeh ek main window hogi, jo minimize aur close buttons ke saath aati hai.
    gtk_window_set_title(GTK_WINDOW(window), "GTK Window");//Window ka title set karta hai. Yahan window ka title "GTK Example" hoga.
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);//Window ka default size set karta hai: 400 pixels width aur 300 pixels height.

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);//Jab user window close karega (destroy signal), tab program gtk_main_quit function ko call karega aur program exit ho jayega.
    //Signal handling ke bina window close karne par program memory me chalta rahega.
    gtk_widget_show_all(window);//Jo bhi widgets (components) aapne create kiye hain, sabko screen par dikhata hai.
//Yahan sirf ek window hai, to wahi visible hoga.

    gtk_main();//GTK application ka event loop shuru karta hai.
// Event loop ka matlab hai user ke actions (jaise button click ya window close) ko process karna.
    return 0;//Program successfully exit hua hai.
}

//sudo apt install pkg-config
//dpkg -l | grep libgtk-3-dev
//gcc test.c -o test $(pkg-config --cflags --libs gtk+-3.0)
//./test
//gcc example.c -o example $(pkg-config --cflags --libs gtk+-3.0)


