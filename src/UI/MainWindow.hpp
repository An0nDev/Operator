#pragma once

#include "MainBox.hpp"

#include <gtkmm/window.h>

namespace Operator::UI {
    class MainWindow : public Gtk::Window {
        MainBox mainBox;
    public:
        MainWindow ();
        virtual ~MainWindow ();
    };
};
