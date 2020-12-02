#include "Box.hpp"

namespace Operator::UI::YouTube {
    Box::Box () : Common::LabelledBox (Gtk::ORIENTATION_VERTICAL, "YouTube") {
        add (streamControlsBox);
        add (chatBox);
    };
    Box::~Box () {};
};
