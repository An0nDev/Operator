#include "ChatBox.hpp"

namespace Operator::UI::YouTube::Chat {
    ChatBox::ChatBox ()
    : Common::LabelledBox (Gtk::ORIENTATION_VERTICAL, "Chat"), todoLabel ("(Todo)") {
        add (todoLabel);
    };
    ChatBox::~ChatBox () {};
}
