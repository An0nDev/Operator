#pragma once

#include "YouTube/YouTubeBox.hpp"

#include <gtkmm/window.h>

namespace Operator {
    class MainWindow : public Gtk::Window {
        YouTubeBox youtubeBox;
    public:
        MainWindow ();
        virtual ~MainWindow ();
    };
};
