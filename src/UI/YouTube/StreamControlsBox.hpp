#pragma once

#include "../Common/LabelledBox.hpp"

#include <gtkmm/button.h>

namespace Operator::UI::YouTube {
    class StreamControlsBox : public Common::LabelledBox {
        Gtk::Button configureButton;
        Gtk::Button startStopButton;
    public:
        StreamControlsBox ();
        virtual ~StreamControlsBox ();
    };
};
