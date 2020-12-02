#include <iostream>

#include <gtkmm/application.h>

#include "UI/MainWindow.hpp"

int main (int argc, char* argv []) {
    Glib::RefPtr <Gtk::Application> app = Gtk::Application::create (argc, argv, "dev.an0n.Operator");
    Operator::UI::MainWindow mainWindow;
    return app->run (mainWindow);
};
