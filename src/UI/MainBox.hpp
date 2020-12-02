#pragma once

#include "Common/LabelledBox.hpp"
#include "YouTube/Box.hpp"

#include <gtkmm/box.h>

namespace Operator::UI {
    class MainBox : public Common::LabelledBox {
        YouTube::Box youtubeBox;
    public:
        MainBox ();
        virtual ~MainBox ();
    };
};
