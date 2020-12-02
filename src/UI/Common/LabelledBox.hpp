#pragma once

#include <gtkmm/box.h>
#include <gtkmm/label.h>

#include <string>

namespace Operator::UI::Common {
    class LabelledBox : public Gtk::Box {
        Gtk::Label label;
    public:
        LabelledBox (Gtk::Orientation const & orientation, std::string const & labelText);
        virtual ~LabelledBox ();
    };
};
