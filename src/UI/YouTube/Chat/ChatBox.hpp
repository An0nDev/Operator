#pragma once

#include "../../Common/LabelledBox.hpp"
#include <gtkmm/label.h>

namespace Operator::UI::YouTube::Chat {
    class ChatBox : public Common::LabelledBox {
        Gtk::Label todoLabel;
    public:
        ChatBox ();
        virtual ~ChatBox ();
    };
}
