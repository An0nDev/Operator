#pragma once

#include "../Common/LabelledBox.hpp"
#include "StreamControlsBox.hpp"
#include "Chat/ChatBox.hpp"

namespace Operator::UI::YouTube {
    class Box : public Common::LabelledBox {
        StreamControlsBox streamControlsBox;
        Chat::ChatBox chatBox;
    public:
        Box ();
        virtual ~Box ();
    };
};
