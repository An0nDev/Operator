#include "LabelledBox.hpp"

namespace Operator::UI::Common {
    LabelledBox::LabelledBox (Gtk::Orientation const & orientation, std::string const & labelText)
    : Box (orientation), label (labelText) {
        add (label);
    };
    LabelledBox::~LabelledBox () {};
};
