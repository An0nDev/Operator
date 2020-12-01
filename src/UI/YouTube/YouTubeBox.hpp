#pragma once

#include <gtkmm/box.h>
#include <gtkmm/label.h>

namespace Operator {
    class YouTubeBox : public Gtk::Box {
        Gtk::Label label;
    public:
        YouTubeBox ();
        virtual ~YouTubeBox ();
    };
};
